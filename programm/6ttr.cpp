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
struct Node* Search(int value)
{
 	struct Node *temp=root;
 
 	while(temp!=NULL)
 	{
 		if(value==temp->data)
 		{
		 	return temp;
		 }
 		else if(value<temp->data)
 		{
 			temp=temp->lchild;
 		}
 		else
 		{
	
 			temp=temp->rchild;
 		}
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
int Height(struct Node *p)
{
 	int x,y;
 	if(p==NULL)return 0;
 		x=Height(p->lchild);
 		y=Height(p->rchild);
 	return x>y?x+1:y+1;
}
struct Node *InPre(struct Node *p)
{
 	while(p && p->rchild!=NULL)
 		p=p->rchild;
 
 return p;
}
struct Node *InSucc(struct Node *p)
{
	 while(p && p->lchild!=NULL)
 			p=p->lchild;
 
 	return p;
}
struct Node *Delete(struct Node *p,int key)
{
 	struct Node *q;
 
 	if(p==NULL)
 		return NULL;
 	if(p->lchild==NULL && p->rchild==NULL)
 	{
 		if(p==root)
 		root=NULL;
 		free(p);
		 return NULL;
 
 	}
 
 	if(key < p->data)
 		p->lchild=Delete(p->lchild,key);
 		else if(key > p->data)
 		p->rchild=Delete(p->rchild,key);
 	else
 	{
 		if(Height(p->lchild)>Height(p->rchild))
	 	{
		 	q=InPre(p->lchild);
		 	p->data=q->data;
 			p->lchild=Delete(p->lchild,q->data);
 		}
 		else
 		{
 			q=InSucc(p->rchild);
 			p->data=q->data;
 			p->rchild=Delete(p->rchild,q->data);
 		}
 
 
 	}
 return p;
}
int main()
{
 	struct Node *temp;
 	int choice,value;
 	do
 	{
 		printf("\nenter the choice\n 1 insert\n2 inorder\n3 preorder\n4 postoreder\n 5 delete\n");
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
		 				Delete(root,value);
 					else
 					{
					 
 							printf("element is not found\n");
 							exit(0);
 						}
					//Delete(root,value);
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

