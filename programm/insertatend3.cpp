#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void insertatend(int value)
{
	//struct node*head=0;
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
		struct node *temp1=head;
		while(temp1->next!=0)
		{
			temp1=temp1->next;
		}
		temp1->next=newnode;
		struct node*temp2=head;
		while(temp2!=0)
		{
			printf("->%d",temp2->data);
			temp2=temp2->next;
		}
		printf("->null\n");
	}
	
}
int main()
{
	int n,value,i;
	printf("enter the size of list:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value:\n");
		scanf("%d",&value);
		insertatend(value);
	}
	
}
	
