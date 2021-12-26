#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
int main()
{
	int i,n,value;
	printf("enter the size of list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&value);
		struct node*newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
		}
		else{
		newnode->next=head;
		head=newnode;
		}
		newnode=head;
		while(newnode!=NULL)
		{
			printf("->%d",newnode->data);
			newnode=newnode->next;
		}
		printf("\n");
	}
	/*struct node*newnode=head;
	while(newnode!=NULL)
	{
		printf("->%d",newnode->data);
		newnode=newnode->next;
	}
	printf("\n");*/
}
