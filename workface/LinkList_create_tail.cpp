#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
	int data;
	LNode *next;
 } LNode,*LinkList;
 LinkList create_tail(LinkList &L);
 int main(void)
 {
 	LinkList L;
 	LNode *q;
 	create_tail(L);
 	q=L->next;
 	while(q!=NULL)
 	{
 		printf("%d",q->data) ;
 		q=q->next;
	 }

 }
  LinkList create_tail(LinkList &L)
  {
  	LNode *s,*p;int x;
  	L=(LinkList)malloc(sizeof(LNode));
  	p=L;
  	scanf("%d",&x);
  	while(x!=-1)
  	{
  		s=(LNode*)malloc(sizeof(LNode));
  		s->data=x;
//  		s->next=NULL;
  		p->next=s;  		
  		p=s;
  		scanf("%d",&x);
	}
	p->next=NULL;
  }
