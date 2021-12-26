#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head=NULL;
void inverse()
{
	struct node*temp,*current,*result=NULL;
	temp=head;
	current=head;
	while(current!=NULL)
	{
		temp=current;
		current=current->next;
		temp->next=result;
		result=temp;
	}
	head=result;
}
void printlist()
{
	struct node*temp;
	temp=head;
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
	for(int i=0;i<10;i++)
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
		inverse();
		printlist();

}
