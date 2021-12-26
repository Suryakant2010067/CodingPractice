#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next,*pre;
};
struct node*head;
void insert_beg(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->pre=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head->pre=newnode;
		head=newnode;
		return;
	}
	else
	{
	
		newnode->next=head;
		head->pre=newnode;
		head=newnode;
		struct node*temp=head;
		while(temp!=NULL)
		{
			printf("->%d",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
int main()
{
	int value,choice;
	do
	{
		printf("enter the choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the value\n");
				scanf("%d",&value);
				insert_beg(value);
				break;
			default:
				printf("invalid choice");
		}
	}while(choice!=0);
}
