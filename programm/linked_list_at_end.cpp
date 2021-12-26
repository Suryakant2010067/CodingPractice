#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
struct node*newnode;
//newnode=(struct node*)malloc(sizeof(struct node));
void printend()
{
	struct node*temp1=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
		
	}
	temp1->next=newnode;
	struct node*temp2=head;
	newnode->next=temp2;
	while(temp2!=NULL)
	{
		printf("->%d",temp2->data);
		temp2=temp2->next;
	}
	printf("NULL\n");
}
int main()
{
	int i,value,n;
	printf("enter the size of list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&value);
		struct node*newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			//newnode->next=head;
		//	head=newnode;
		//	printend();
		}
	}
	printend();
}
