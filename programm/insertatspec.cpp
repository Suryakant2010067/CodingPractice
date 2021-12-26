#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void store(int value)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=head;
	head=temp;

}
void insert_at_spe(int k,int pos)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=k;
	newnode->next=NULL;
	struct node*temp=head;
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
		return;
	}
	int i=1;
	for(i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
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
	struct node*newnode;
	int i,n,value,pos,k;
	printf("enter the size of list:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value:\n");
		scanf("%d",&value);
		store(value);
	}
	printf("enter the insert list:\n");
	scanf("%d",&k);
	printf("enter the position:\n");
	scanf("%d",&pos);
	insert_at_spe(k,pos);
	printlist();
}
