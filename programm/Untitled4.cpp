#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=0;
void insertbeg(int value)
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=0;
	if(head==0)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	//	printf("one node is added");
		
	}
	printf("one node is added\n");
}
int main()
{
	int n,value;
	printf("enter the value");
	scanf("%d",&value);
	insertbeg(value);
}
