#include<stdio.h>                 /*����ͷ�ļ�*/
#include<stdlib.h>
typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode,*LinkList;
LinkList CreateList_head(LinkList &L);
int main(void)                  /*һ���򵥵�C����*/
{
   LinkList L;
   LNode * p;
   CreateList_head(L);
   p=L->next;
   while(p!=NULL)
   {
   	printf("%d",p->data);
   	p=p->next;
   }
}
LinkList CreateList_head(LinkList &L)
{
	LNode *s;int x;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	scanf("%d",&x);
	//����-1����
	while(x!=-1)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s;
		scanf("%d",&x);
		
	}
}
