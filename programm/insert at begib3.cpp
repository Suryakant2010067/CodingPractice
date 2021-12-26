#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void printlist()
{
		struct node *temp=head;
		while(temp!=0)
		{
			printf("->%d",temp->data);
			temp=temp->next;
		}
		printf("->null\n");
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
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=0;
		if(head==0)
		{
			head=newnode;
		
		}
		else
			newnode->next=head;
			head=newnode;
			printlist();
		}
	}


