//一个长度为L(L>=1),处在第[L/2]个位置的数称为S的中位数。若序列S1=（11，13，15，17，19），若S1的中位数是15，两个序列的中位数
//是含他们所有元素的升序序列的中位数。例如，若S2=（2,4,6,8,20），则S1和S2的中位数是11.现有2个等长升序序列A和B
//算法思想：
//1.设2个数列 A，B的中位数a,b
//若 a=b,则 a或 b 为所求中位数，结束
//若 a<b ,则舍弃序列A中较小的一半，同时舍弃序列B中较大的一半，要求舍弃的长度相等。
//若 2个序列个数为偶数，则舍弃A中点以前部分并包括中点， 舍弃B中点以后的部分，并保留中点。因为要等长舍去。 
//若2个序列为奇数，则2个序列都舍弃小于或大于中点的部分即可。
//******* 
//若 a>b ,则舍弃序列A中较大的一半，同时舍弃序列B中较小的一半，要求两次长度相等。 
#include<stdio.h>
#include<stdlib.h>
#define  MaxSize 50
typedef int ElemType;
typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
void reverse(SqList &L,int n,int m);

int main(void){
	SqList A,B;
	create_sqlist(A);create_sqlist(B);
	for(int i=0;i<A.length;i++)
	{
		printf("%d ",A.data[i]);
	}
	printf("\n");
	for(int i=0;i<B.length;i++)
	{
		printf("%d ",B.data[i]);
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

void M_search(SqList A,SqList B,int n)
{
	int s1=0,d1=n-1,s2=0,d2=n-1,m1,m2;
}
