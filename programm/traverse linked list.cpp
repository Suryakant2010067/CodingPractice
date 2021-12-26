#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	
};
struct node*head;
void printlist()
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
	int traverse(int);
	printf("enter the size of list\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value:\n");
		scanf("%d",&value);
		traverse(value);
		struct node*temp;
		temp->data=value;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
		}
		temp->next=head;
		head=temp;
		
	}
	printlist();
}
