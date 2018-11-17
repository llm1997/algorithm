//设将n（n>1）个整数存放到一维数组R中，尝试设计一个在时间和空间两方面都尽可能高效的算法，将R中
//保存的序列循环左移P（0<p<n)个位置，即将R中的数据由（X0，X1...Xn-1）变换为(Xp,Xp+1...,Xn-1,X0,X1,...,Xp-1) 
//算法思想：
//假设 数组 ab(a为所要的移动的数组),先把a倒置,得到a逆b,再把b倒置，得a逆b逆，最后再对整体倒置，得到我们想要的ba
//上面是最高效的算法
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
	SqList L;
	create_sqlist(L);

	//假设数组大小为5，元素分别是1 2 3 4 5 
	//此处假设P=2,此时为ab
	//先倒置a的逆 
	reverse(L,1,2);
	//倒置b的逆 
	reverse(L,3,6);
	//最后全部倒置
	reverse(L,1,6); 
	
	for(int i=0;i<L.length;i++)
	{
		printf("%d ",L.data[i]);
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

//这里传的n,m为逻辑上的第几个数，转换为数组要-1 
void reverse(SqList &L,int n,int m)
{
	n=n-1;m=m-1;
	int tmp;
	while(n<m) 
	{
		tmp=L.data[n];
		L.data[n]=L.data[m];
		L.data[m]=tmp;
		n=n+1;
		m=m-1;
	}
	
}  
