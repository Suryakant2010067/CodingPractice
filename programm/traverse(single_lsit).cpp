#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void creat_node(int value)
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
int main()
{
	int n,i,choice,value;
	do
	{
		printf("enter the choice :\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("enter the value:\n");
					scanf("%d",&value);
					creat_node(value);
					break;
				}
			case 2:
				{
					traverse();
					break;
				}
			default:
				{
					printf("invalid choice:\n");
				}
		}
		
	}while(choice!=0);
}
