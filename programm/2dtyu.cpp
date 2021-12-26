#include <stdio.h>
#include <stdlib.h>
struct Node
{
 	struct Node *lchild;
 	int data;
 	struct Node *rchild;
};
struct Node*root=NULL;
void RInsert(int key)
{
 	struct Node *t=root;
	struct Node *r=NULL,*p;
 
	if(root==NULL)
 	{
 		p=(struct Node *)malloc(sizeof(struct Node));
 		p->data=key;
 		p->lchild=p->rchild=NULL;
 		root=p;
 		return;
 	}
 	while(t!=NULL)
 	{
 		    r=t;
 		if(key<t->data)
 	    	t=t->lchild;
 		else if(key>t->data)
 		    t=t->rchild;
 		else
 		    return;
 	}
 	p=(struct Node *)malloc(sizeof(struct Node));
 	p->data=key;
 	p->lchild=p->rchild=NULL;
 
 	if(key<r->data) 
	 	r->lchild=p;
	 else 
	 	r->rchild=p;
}
void Inorder(struct Node *p)
{
 	if(p)
 	{
		 Inorder(p->lchild);
 		printf("%d ",p->data);
 		Inorder(p->rchild);
	 }
}
void preorder(struct Node*p)
{
	if(p)
	{
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
void postorder(struct Node*p)
{
	if(p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d ",p->data);
	}
}
int main()
{
 	struct Node *temp;
 	RInsert(50);
 	RInsert(10);
 	RInsert(40);
 	RInsert(20);
 	RInsert(30);
 	printf("inorder=");
 	Inorder(root);
 	printf("\n");
 	printf("preorder=");
 	preorder(root);
 	printf("\n");
 	printf("postorder=");
 	postorder(root);
}
