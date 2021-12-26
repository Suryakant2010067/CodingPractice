#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void insert_list(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	newnode->next=head;
	head=newnode;
	if(head==0)
	{
		//printf("empty");
		head=newnode;
		return;
	}
	else
	{
	//	newnode->next=head;
//		head=newnode;
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
	int choice,value;
	do
	{
		printf("enter the choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("enter the value:\n");
					scanf("%d",&value);
					insert_list(value);
					break;
				}
			case 2:
				{
					exit(0);
					break;
				}
				default:
					{
						printf("invalid choice:\n");
					}
		}
	}while(choice!=0);
}
