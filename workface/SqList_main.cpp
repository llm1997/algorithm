#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50 
typedef  int ElemType;

typedef struct{
	ElemType data[MaxSize];
	int length=5;
}SqList;
bool deleted_min(SqList &L,ElemType &value);
int main(void)
{
	//创建线性表
	SqList L;
	int x;int n=0;
	while(n<5)
	{
		scanf("%d",&x);
		L.data[n]=x;
		n=n+1;		
	}

	//调用
	int min;
	deleted_min(L,min);
	printf("min= %d \n",min);
	for(int i=0;i<L.length;i++)
	{
		printf("%d ",L.data[i]);
	}
	
}
//delete min
bool deleted_min(SqList &L,ElemType &value)
{
	int min=L.data[0];
	int k=0;
	for(int i=1;i<L.length;i++)
	{
		if(min>L.data[i])
		{
			min=L.data[i];
			k=i;
		}
	}
	L.data[k]=L.data[L.length];
	L.length--;
	value=min;
	return true;
	
}
