//������˳�����ɾ������ֵ�ظ���Ԫ�أ�ʹ���е�Ԫ�ؾ���ͬ
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
