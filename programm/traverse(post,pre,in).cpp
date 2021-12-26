#include<stdio.h>
#include<stdlib.h>
//struct node
struct node
{
	int data;
	struct node*lchild,*rchild;
};
struct node*root;
void create()
{
	int x;
	printf("enter the root value\n");
	scanf("%d",&x);
	root=(struct node*)malloc(sizeof(struct node));
	root=x;
	root->lchild=p;
	root->rchild=q;
	root->lchild->lchild=x;
	root->lchild-<rchild=x;
	root->lchild=root->rchild=NULL;
	
}
void preorder()
{
	struct node*root;
	if(root==NULL)
	{
		return;
	}
	printf("%d ",root->data);
	preorder(root->lchild);
	preorder(root->rchild);
}
void postorder()
{
	struct node*root;
	if(root==NULL)
	{
		return;
	}
	preorder(root->lchild);
	preorder(root->rchild);
	printf("%d ",root->data);
}
void inorder()
{
	struct node*root;
	if(root==NULL)
	{
		return;
	}
	preorder(root->lchild);
	printf("%d ",root->data);
	preorder(root->rchild);
}
int main()
{
	int choice;
	do
	{
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					create();
					break;
				}
			case 2:
				{
					preorder();
					break;
				}
			case 3:
			{
				inorder();
				break;
			}
			case 4:
			{
				postorder();
				break;
			}
			case 5:
			{
				exit(0);
			}	
			default:
			{
				printf("invalid choice\n");
			}
		}
	}while(choice!=0);
}

