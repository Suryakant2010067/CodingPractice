#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next,*pre;
};
struct node*head;
void insert_end(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->pre=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	else
	{
		struct node*temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=newnode;
		newnode->pre=temp1;
		newnode=temp1;
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
				insert_end(value);
				break;
			default:
				printf("invalid choice");
		}
	}while(choice!=0);
}
