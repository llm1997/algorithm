//问题：有序表中删除其值在给定值是 s，t 之间（s<t)
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50
typedef  int ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
bool delete_specific(SqList &L,int s,int t);
int main(void)
{
	SqList L;
	create_sqlist(L);
	//设置所要删除数据范围
	int s=6;int t=9;
	delete_specific(L,s,t);
	for(int i=0;i<L.length;i++)
	{
		printf("%d",L.data[i]);
	} 
}

bool delete_specific(SqList &L,int s,int t)
{
	if(s>=t)
	  return false;
	//记录不在特定范围的数据  
	int k=0;
	for(int i=0;i<L.length;i++)
	{
		if(L.data[i]>s&&L.data[i]<t)
			continue;
		else
		{
			L.data[k]=L.data[i];
			k++;
		}
	}
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
