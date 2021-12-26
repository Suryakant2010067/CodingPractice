#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	int null;
	struct node*next;
};
struct node *head=0;
int insertbeg(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=0;
	if(head==0)
	{
		printf("\nlist is empty");
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	//	printf("\none node is addad=%d",newnode->data);
	struct node *temp=head;
	while(temp!=0)
	{
		
	
		printf("\none node is addad=%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	int value,null,n;
	printf("enter the list number\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter the value\n");
		scanf("%d",&value);
		insertbeg(value);
	}
}
