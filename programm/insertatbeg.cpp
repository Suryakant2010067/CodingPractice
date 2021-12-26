#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void insrt_at_beg(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	newnode->next=head;
	head=newnode;
/*	if(head==NULL)
	{
		head=newnode;
		
	}
	else
	{
		
	}*/
}
void print()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->next;
	}
	printf("->NULL\n");
}
int main()
{
	int n,i,value;
	printf("enter the size of list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value:\n");
		scanf("%d",&value);
		insrt_at_beg(value);
			print();
	}
//	print();
}
