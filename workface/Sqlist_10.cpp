//�轫n��n>1����������ŵ�һά����R�У��������һ����ʱ��Ϳռ������涼�����ܸ�Ч���㷨����R��
//���������ѭ������P��0<p<n)��λ�ã�����R�е������ɣ�X0��X1...Xn-1���任Ϊ(Xp,Xp+1...,Xn-1,X0,X1,...,Xp-1) 
//�㷨˼�룺
//���� ���� ab(aΪ��Ҫ���ƶ�������),�Ȱ�a����,�õ�a��b,�ٰ�b���ã���a��b�棬����ٶ����嵹�ã��õ�������Ҫ��ba
//���������Ч���㷨
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

	//���������СΪ5��Ԫ�طֱ���1 2 3 4 5 
	//�˴�����P=2,��ʱΪab
	//�ȵ���a���� 
	reverse(L,1,2);
	//����b���� 
	reverse(L,3,6);
	//���ȫ������
	reverse(L,1,6); 
	
	for(int i=0;i<L.length;i++)
	{
		printf("%d ",L.data[i]);
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

//���ﴫ��n,mΪ�߼��ϵĵڼ�������ת��Ϊ����Ҫ-1 
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
