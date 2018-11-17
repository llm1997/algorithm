//设计一个高效的算法，顺序表逆置
#include<stdio.h> 
#include<stdlib.h>
#define MaxSize 50
typedef  int ElemType;

typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
bool reverse_sqlist(SqList &L);

int main(void)
{
	SqList L;
	create_sqlist(L);
	reverse_sqlist(L);
	for(int i=0;i<L.length;i++)
	{
		printf("%d",L.data[i]);
	}
}
bool reverse_sqlist(SqList &L)
{
	int i=0,j=L.length-1;
	int tmp;
	while(i<j)
	{
		tmp=L.data[i];
		L.data[i]=L.data[j];
		L.data[j]=tmp;
		i++;
		j--;
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
 
