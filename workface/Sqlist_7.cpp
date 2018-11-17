//将2个有序表合并成一个新的有序表，并返回
//思想：比较2个线性表中较小的节点，先放入数组，最后再把剩余的放入 
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50
typedef  int ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
SqList merge(SqList &L1,SqList &L2);
int main(void)
{
	SqList L1,L2,L;
	create_sqlist(L1);
	create_sqlist(L2);	
	L=merge(L1,L2);
	for(int i=0;i<L.length;i++)
	{
		printf("%d",L.data[i]);
	} 
}

SqList merge(SqList &L1,SqList &L2)
{
	SqList L;
	int i=0,k=0,j=0;
	while((i!=(L1.length))&&(j!=(L2.length)))
	{
		
		if(L1.data[i]>L2.data[j])
		{
			L.data[k]=L2.data[j];
			k++;
			j++;
		}
		else
		{
			L.data[k]=L1.data[i];
			k++;
			i++;
		}
	}
	
	while(i!=(L1.length))
	{
		L.data[k]=L1.data[i];
		k++;
		i++;
	}
	while(j!=(L2.length))
	{
		L.data[k]=L2.data[j];
		j++;
		k++;
	}
	L.length=k;
		
	
	return L;
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
