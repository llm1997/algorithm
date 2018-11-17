//问题：*****
//线性表a1...an,递增有序且按顺序存储，要求一算法最短时间内查找数值为x的元素，若找到将其与后继元素相交换
//若找不到，则插入表中，仍使表有序 ！
//*********** 
//算法思想：
//折半查找
#include<stdlib.h> 
#include<stdio.h>
#define MaxSize 50
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
void find(int x,SqList &L);

int main(void){
	SqList L;
	create_sqlist(L);
	for(int i=0;i<L.length;i++)
	{
		printf("%d ",L.data[i]);
	} 
	printf("请输入您想查找的元素X：");
	int x;
	scanf("%d",&x) ;
	
}

//折半查找 
void find(int x,SqList &L)
{
	int n=0,m=L.length-1;
	bool flag=false;
	while(n<=m)
	{
		int mid=(n+m)/2;
		if(L.data[mid]==x)
		{
			int tmp=L.data[mid];
			L.data[mid]=L.data[mid+1];
			L,data[mid+1]=tmp;
			flag=true;
		}
		else
		{
			if(x>L.data[mid])
			{
				n=mid+1;
			}
			else
			{
				m=mid-1;
			}
		}
	}
	
	//查找失败
	if(!flag) 
	{
		
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
