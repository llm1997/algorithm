//��֪һά����A[m+n+1]��һ�δ����2�����Ա�(a0--am),(b0--bn),�Խ�2��˳����λ�û�������(b0--bn),(a0--am)
//�㷨˼�룺
//1.�Ƚ����Ա�ԭ�ص��ã���(bn--b0),(am--a0)
//2.�ٵݹ�ֱ���(b0--bn),(a0--am)
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
	printf("�������������鳤��:");
	scanf("%d",&L.length);
	//�������Ա�
	int x;int n=0;
	while(n<L.length)
	{
		scanf("%d",&x);
		L.data[n]=x;
		n=n+1;		
	}
} 
