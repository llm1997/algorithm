//已知一维数组A[m+n+1]中一次存放着2个线性表(a0--am),(b0--bn),试将2个顺序表的位置互换，即(b0--bn),(a0--am)
//算法思想：
//1.先将线性表原地倒置，即(bn--b0),(am--a0)
//2.再递归分别倒置(b0--bn),(a0--am)
#include<stdio.h> 
#include<stdlib.h>
#define MaxSize 50
typedef int ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
void reverse(SqList &L,int m,int n);
int main(void)
{
	SqList L;
	create_sqlist(L);
	int m=2,n=3;
	reverse(L,0,m+n+1);	
	reverse(L,0,n);
	reverse(L,n+1,m+n+1);
	for(int i=0;i<L.length;i++)
	{
		printf("%d",L.data[i]);
	} 
}

void reverse(SqList &L,int m,int n )
{
	int tmp;
	while(m<n)
	{
		tmp=L.data[m];
		L.data[m]=L.data[n];
		L.data[n]=tmp;
		m++;
		n--;
	}
}

void create_sqlist(SqList &L)
{
	printf("请输入您的数组长度:");
	scanf("%d",&L.length);
	//创建线性表
	int x;int n=0;
	while(n<L.length)
	{
		scanf("%d",&x);
		L.data[n]=x;
		n=n+1;		
	}
} 
