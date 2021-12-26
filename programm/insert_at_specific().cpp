#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void insert_specific(int item,int pos)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	int i;
	if(pos==0)
	{
		head=newnode;
		exit(0);
	}
	else if(pos==1)
	{
		newnode->next=head;
		head=newnode;
		return;
	}
	else
	{
			struct node*temp=head;
			for(i=1;i<pos-1;i++)
			{
				temp=temp->next;
			}
			newnode->next=temp->next;
			temp->next=newnode;
			struct node*temp2=head;
			while(temp2!=NULL)
			{
				printf("->%d",temp2->data);
				temp2=temp2->next;
			}
			printf("\n");
	
	}
}
void insert(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	newnode->next=head;
	head=newnode;
}
void traverse()
{
			struct node*temp2=head;
			while(temp2!=NULL)
			{
				printf("->%d",temp2->data);
				temp2=temp2->next;
			}
			printf("\n");
}

int main()
{
	int choice,value,pos,item;
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
					insert(value);
					break;
				}
			case 2:
				{
					traverse();
					break;
				}
			case 3:
				{
					printf("enter the item:\n");
					scanf("%d",&item);
					printf("enter the pos:\n");
					scanf("%d",&pos);
					insert_specific(item,pos);
					break;
				}
			case 4:
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
