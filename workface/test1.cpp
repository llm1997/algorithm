#include<stdio.h> 
#include<stdlib.h>
typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode,*LinkList;
LinkList create(LinkList &L);
int main(void)
{
	LinkList L;
	LNode *p;
	create(L);
	p=L->next;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
LinkList create(LinkList &L)
{
	LNode *s;int x;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	scanf("%d",&x);
	//ÊäÈë-1½áÊø
	while(x!=-1) 
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s;
		scanf("%d",&x);
	}
}
