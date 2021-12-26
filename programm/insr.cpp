#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void insert_at_beg(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
	//	newnode->next=head;
	//	head=newnode;
		struct node*temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=newnode;
		//newnode->next=temp1->next;
		//struct node*temp=temp1;
		//temp=newnode;
	}
	
}
void print_list()
{
	struct node *temp1,*temp=head;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->next;
	}
	printf("->NULL\n");
}
int main()
{
	int i,value;
	for(i=0;i<5;i++){
		printf("enter the value\n");
		scanf("%d",&value);
		insert_at_beg(value);
		print_list();
	}
	//print_list();
}
