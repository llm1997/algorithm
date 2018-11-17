#include<stdio.h>
#include<stdlib.h>
typedef struct LNode
{
	int data;
	LNode *next;
 } LNode,*LinkList;
 LinkList create_head(LinkList &L);
 int main(void)
 {
 	 LinkList L;
  create_head(L);
  LNode *p;
  p=L->next;
  while(p!=NULL)
  {
  
  printf("%d",p->data);
  p=p->next;
}
 }
 
 
 LinkList create_head(LinkList &L){
 	LNode *s;int x;
 	L=(LinkList)malloc(sizeof(LNode));
 	L->next=NULL;
// 	L->data=999;
 	scanf("%d",&x);
 	while(x!=-1)
 	{
 		s=(LNode*)malloc(sizeof(LNode));
 		s->data=x;
 		s->next=L->next;
 		L->next=s;
 		scanf("%d",&x);
	}
 }
