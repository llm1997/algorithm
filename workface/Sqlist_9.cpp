//���⣺*****
//���Ա�a1...an,���������Ұ�˳��洢��Ҫ��һ�㷨���ʱ���ڲ�����ֵΪx��Ԫ�أ����ҵ���������Ԫ���ཻ��
//���Ҳ������������У���ʹ������ ��
//*********** 
//�㷨˼�룺
//�۰����
#include<stdlib.h> 
#include<stdio.h>
#define MaxSize 50
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;
void create_sqlist(SqList &L);
void find(int x,SqList &L);

int main(void){
	SqList L;
	create_sqlist(L);
	for(int i=0;i<L.length;i++)
	{
		printf("%d ",L.data[i]);
	} 
	printf("������������ҵ�Ԫ��X��");
	int x;
	scanf("%d",&x) ;
	
}

//�۰���� 
void find(int x,SqList &L)
{
	int n=0,m=L.length-1;
	bool flag=false;
	while(n<=m)
	{
		int mid=(n+m)/2;
		if(L.data[mid]==x)
		{
			int tmp=L.data[mid];
			L.data[mid]=L.data[mid+1];
			L,data[mid+1]=tmp;
			flag=true;
		}
		else
		{
			if(x>L.data[mid])
			{
				n=mid+1;
			}
			else
			{
				m=mid-1;
			}
		}
	}
	
	//����ʧ��
	if(!flag) 
	{
		
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
