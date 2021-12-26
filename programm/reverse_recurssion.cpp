#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
int reverse(struct node* current)
{
	//struct node* current;
	if(current==NULL)
	{
		current=head;
	//	return (current;
	}
	reverse(current->next);
	current->next->next=head;
	current->next=NULL;
	
	
}
void printlist()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node*newnode,*head;
	head=NULL;
	for(int i=0;i<5;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=i;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			newnode->next=head;
			head=newnode;
		}
		
	}
	printlist();
	reverse(*i);
	printf("\n");
	printlist();
}
