//һ������ΪL(L>=1),���ڵ�[L/2]��λ�õ�����ΪS����λ����������S1=��11��13��15��17��19������S1����λ����15���������е���λ��
//�Ǻ���������Ԫ�ص��������е���λ�������磬��S2=��2,4,6,8,20������S1��S2����λ����11.����2���ȳ���������A��B
//�㷨˼�룺
//1.��2������ A��B����λ��a,b
//�� a=b,�� a�� b Ϊ������λ��������
//�� a<b ,����������A�н�С��һ�룬ͬʱ��������B�нϴ��һ�룬Ҫ�������ĳ�����ȡ�
//�� 2�����и���Ϊż����������A�е���ǰ���ֲ������е㣬 ����B�е��Ժ�Ĳ��֣��������е㡣��ΪҪ�ȳ���ȥ�� 
//��2������Ϊ��������2�����ж�����С�ڻ�����е�Ĳ��ּ��ɡ�
//******* 
//�� a>b ,����������A�нϴ��һ�룬ͬʱ��������B�н�С��һ�룬Ҫ�����γ�����ȡ� 
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

void M_search(SqList A,SqList B,int n)
{
	int s1=0,d1=n-1,s2=0,d2=n-1,m1,m2;
}
