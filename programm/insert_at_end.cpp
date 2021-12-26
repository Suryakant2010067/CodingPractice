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
		printf("\n");
}
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
		else
		{
			struct node*temp=head;
			while(temp!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			printlist();
		}

	}	
	
}

