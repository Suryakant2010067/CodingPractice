#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void print()
{
	struct node*temp2=head;
	while(temp2!=NULL)
	{
		printf("->%d",temp2->data);
		temp2=temp2->next;
	}
}
int main()
{
	int n,i,value;
	printf("enter the size of list\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value\n");
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
		
			struct node*temp1=head;
			while(temp1->next!=NULL)
			{
				temp1=temp1->next;
			}
			temp1->next=newnode;
			//newnode->next=head->next;
		}
		print();
	}
}
