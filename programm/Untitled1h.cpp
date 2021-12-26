#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	
};
struct node*head;
int creat(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
int insert_spe(int pos,int item)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=NULL;
	int i=1;
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
		struct node*temp1=head;
		while(i<pos-1)
		{
			temp1=temp1->next;
			i=i+1;
		}
		newnode->next=temp1->next;
		temp1->next=newnode;
	//	newnode->next=temp1->next;
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
	int value,choice,item,pos;
	do
	{
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("enter the insert value\n");
					scanf("%d",&value);
					creat(value);
					break;
				}
			case 2:
				{
					traverse();
					break;
					
				}
			case 3:
				{
					printf("enter the pos and item\n");
					scanf("%d %d",&pos,&item);
					insert_spe(pos,item);
					break;
					
				}
			case 4:
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
