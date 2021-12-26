#include<stdio.h>
#include<stdlib.h>
struct  node
{
	int data;
	struct node*next,*pre;
};
struct node*head,*temp;
int create(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->pre=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		temp->next=newnode;
		newnode->pre=temp;
		temp=newnode;
		
	}
}
void print_list()
{
	struct node*temp=head;
	while(temp!=NULL){
		printf("->%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int choice,value;
	printf("enter the choice\n");
	scanf("%d",&choice);
	do
	{
			printf("insert the number\n");
			scanf("%d",&value);
			create(value);
			print_list();
			printf("enter the choice\n");
			scanf("%d",&choice);
			
	}while(choice==0);
	printf("not insert element");
}
