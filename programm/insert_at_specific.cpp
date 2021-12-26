#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void insert(int pos,int item)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=NULL;
	int i=1;
	struct node*temp=head;
	if(pos==1)
	{
		newnode->next=temp;
		head=newnode;
	}
	else
		//struct node*temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	
}
void print()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n,i,value,pos,item;
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
			newnode->next=head;
			head=newnode;
	}
	print();
	printf("\nenter the position and item\n");
	scanf("%d %d",&pos,&item);
	insert(pos,item);
	print();
	
	
}
