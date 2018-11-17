//从有序顺序表中删除所有值重复的元素，使表中的元素均不同
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50
typedef  int ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
bool delete_duplicate(SqList &L);
int main(void)
{
	SqList L;
	create_sqlist(L);	
	delete_duplicate(L);
	for(int i=0;i<L.length;i++)
	{
		printf("%d",L.data[i]);
	} 
}

bool delete_duplicate(SqList &L)
{
	int k=0;
	for(int i=0;i<L.length-1;i++)
	{
		if(L.data[i]==L.data[i+1])
			continue;
		else
		{
			L.data[k]=L.data[i];
			k++;
		}
	} 
	L.data[k]=L.data[L.length-1];
	k++; 
	L.length=k;
	return true;
	
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
