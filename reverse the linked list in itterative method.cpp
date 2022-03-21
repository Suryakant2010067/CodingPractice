#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void reverse(){
	struct node*temp=head,*result,*current=head;//1234
	result=NULL;
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
	struct node *temp=head;
//	temp=head;
	printf("\n");
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->next;
	}
}

int main()
{
	struct node *newnode,*temp;
	head=NULL;
	int i=0;
	printf("first node");
	for(i=0;i<10;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=i;
		newnode->next=NULL;
		if(head==NULL)
		{
				printf("first node");
			head=newnode;
		}
		else
		{
			newnode->next=head;
			head=newnode;
		}
	}
	
	printlist();
	reverse();
	printlist();
	return 0;
}
