//设计一个高效的算法:删除线性表中所有值为x的元素，要求时间复杂度O(l),空间复杂度O(l)
/*算法思想：
1.用k记录顺序表中不等于k的元素个数
2.即 L.[k]=L.[i] ,其中i为总个数 
*/ 
#include<stdio.h> 
#include<stdlib.h>
#define MaxSize 50
typedef  int ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
void delete_sqlist(SqList &L,int x);
int main(void)
{
	SqList L;
	create_sqlist(L);
	int x;
	printf("\n请输入要删除的元素:");
	scanf("%d",&x);
	delete_sqlist(L,x);
	for(int i=0;i<L.length;i++)
	{
		printf("%d",L.data[i]);
	}
	
} 

void delete_sqlist(SqList &L,int x)
{
	int k=0;
	for(int i=0;i<L.length;i++)
	{
		if(L.data[i]!=x)
		{
			L.data[k]=L.data[i];
			k++;
		}
	}
	L.length=k;
}

//创建线性表 
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
