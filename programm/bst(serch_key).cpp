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
 	struct Node *temp=root;
	struct Node *r=NULL,*p;
 
	if(root==NULL)
 	{
 		p=(struct Node *)malloc(sizeof(struct Node));
 		p->data=key;
 		p->lchild=p->rchild=NULL;
 		root=p;
 		return;
 	}
 	else
 	while(temp!=NULL)
 	{
 		    r=temp;
 		if(key<temp->data)
 	    	temp=temp->lchild;
 		else if(key>temp->data)
 		    temp=temp->rchild;
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
struct Node *Search(int key)
{
	 struct Node *t=root;
 
	 while(t!=NULL)
	 {
 		if(key==t->data)
 				return t;
 		else if(key<t->data)
 			t=t->lchild;
		 else
 			t=t->rchild;
	 }
 return NULL;
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
 	int choice,value;
 	do
 	{
 		printf("\nenter the choice\n 1 insert\n2 inorder\n3 preorder\n4 postoreder\n 5 serach key\n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
 				{
 					printf("insert the value\n");
 					scanf("%d",&value);
 					RInsert(value);
 					break;
				 }
			case 2:
				{
					printf("inorder=");
 					Inorder(root);
 					break;
				
				}
			case 3:
				{
					printf("\n");
 					printf("preorder=");
 					preorder(root);
 					break;
				 }
			case 4:
				{
					printf("\n");
 					printf("postorder=");
 					postorder(root);
 					break;
				}
			case 5:
				{
					printf("searching the key\n");
					scanf("%d",&value);
					temp=Search(value);
					if(temp!=NULL)
		 				printf("element %d is found\n",temp->data);
 					else
 							printf("element is not found\n");
					break;
				
				}
			case 6:
			{
				exit(0);
					}		
			default:
			{
				printf("invalid choice");
			}		 		 
		 }
	 }while(choice!=0);
}

