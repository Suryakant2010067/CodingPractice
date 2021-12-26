#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node*head=NULL;
void printlist(int value)
{
	struct node*temp=head;
	printf("->%d",temp->value);
}
int main()
{
	struct node*newnode;
//	newnode=(struct node*)malloc(sizeof(struct node));
	int i,n,value;
	printf("enter the size of list:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			newnode=(struct node*)malloc(sizeof(struct node));
				scanf("%d",&value);
				newnode->data=value;
				newnode->next=NULL;
				if(head==0)
				{
					head=newnode;
				}
				newnode->next=head;
				head=newnode;
				printlist(value);
	}

	
}
