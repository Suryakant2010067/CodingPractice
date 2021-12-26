#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node *head;
void insertbeg(int value)
{
	struct node *newnode,*null;
//	null=(struct node*)malloc(sizeof(struct node));
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=0;
	if(head==null)
	{
		head=newnode;
	}
	else
	{
	//	struct node *temp=head;
		newnode->next=head;
		head=newnode;
		struct node *temp=head;
		while(temp!=0)
		{
			printf("->%d",temp->data);
			temp=temp->next;
		}
		printf("->null\n");
	}
}

int main()
{
	int value,i,n;
	printf("how many list are:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the value");
		scanf("%d",&value);
		insertbeg(value);
	}
}

