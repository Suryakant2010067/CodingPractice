#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next,*pre;
};
struct node*head;
void insert_at_beg(int pos,int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->pre=NULL;
	newnode->next=NULL;
	int i=1;
	if(pos==1)
	{
		head->pre=newnode;
		newnode->next=head;
		head=newnode;
	}
	else
	{
		struct node*temp=head;
		while(i<=pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode->pre=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->pre=newnode;
	}
}
void print()
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
	int value,choice,pos;
	do
	{
		printf("enter the choice\n");
		scanf("%d",&choice);
		printf("\ninsert the value\n");
		scanf("%d",&value);
		printf("enter the position\n");
		scanf("%d",&pos);
		insert_at_beg(pos,value);
		print();
	}
	while(choice==0);
	printf("not insert the value\n");
}
