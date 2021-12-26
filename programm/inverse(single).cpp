#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	 struct node*next;
};
struct node*head;
void create(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	newnode->next=head;
	head=newnode;
}
void traverse()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void inverse()
{
	struct node*temp=head,*pre=NULL,*current=head;
	while(current!=NULL)
	{
		temp=current;
		current=current->next;
		temp->next=pre;
		pre=temp;
	}
	head=pre;
}
int main()
{
	int choice,value;
	do
	{
		printf("enter the choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("enter the value\n");
				scanf("%d",&value);
				create(value);
				break;
			}
			case 2:
			{
				traverse();
				break;
			}
			case 3:
			{
				inverse();
				break;
			}
			default:
			{
				printf("invalid choice\n");
			}	
		}
	}while(choice!=0);
}
