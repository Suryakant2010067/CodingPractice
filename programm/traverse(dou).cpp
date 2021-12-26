#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next,*pre;
};
struct node*head;
void creat(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->pre=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
	
		newnode->next=head;
		newnode->pre=head;
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
			default:
				printf("invalid choice");
		}
	}while(choice!=0);
}
