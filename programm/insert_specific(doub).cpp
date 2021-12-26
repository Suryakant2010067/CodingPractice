#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next,*pre;
};
struct node*head;
void insert_specific(int item,int pos)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->pre=NULL;
	int i;
	if(pos==1)
	{
		newnode->next=head;
		head->pre=newnode;
		head=newnode;
		return;
	}
	else
	{
		struct node*temp1=head;
		for(i=1;i<pos-1;i++)
		{
			temp1=temp1->next;
		}
		newnode->next=temp1->next;
		temp1->next=newnode;
		newnode->pre=temp1;
		newnode=temp1;
	}
}
void creat(int value)
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
		newnode->next=head;
		head->pre=newnode;
		head=newnode;
	}
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
int main()
{
	int value,choice;
	int item,pos;
	do
	{
		printf("enter the choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the value\n");
				scanf("%d",&value);
				creat(value);
				break;
			case 2:
				traverse();
				break;	
			case 3:
				printf("enter the item\n");
				scanf("%d",&item);
				printf("enter the pos\n");
				scanf("%d",&pos);
				insert_specific(item,pos);
				break;	
			default:
				printf("invalid choice");
		}
	}while(choice!=0);
}
