//���һ����Ч���㷨:ɾ�����Ա�������ֵΪx��Ԫ�أ�Ҫ��ʱ�临�Ӷ�O(l),�ռ临�Ӷ�O(l)
/*�㷨˼�룺
1.��k��¼˳����в�����k��Ԫ�ظ���
2.�� L.[k]=L.[i] ,����iΪ�ܸ��� 
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
	printf("\n������Ҫɾ����Ԫ��:");
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

//�������Ա� 
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
