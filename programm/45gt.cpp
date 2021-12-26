#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
int create(int value)
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
		newnode->next=head;
		head=newnode;
	}
}
void traverse()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int delete_spe(int pos)
{
	int i=1;
	if(pos==1)
	{
		head=head->next;
	//	free(head);
	}
	else
	{
		struct node*temp=head,*pre;
		for(i=1;i<pos-1;i++)
		{
			pre=temp;
			temp=temp->next;
		}
		pre=temp->next;
		temp->next=pre->next;
		free(pre);
	}
}
int main()
{
	int choice,pos,value;
	do
	{
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("enter the insert value\n");
					scanf("%d",&value);
					create(value);
					break;
				}
			case 2:
				{
					traverse();
					break;
				}
			case 3:
				{
					printf("enter the pos\n");
					scanf("%d",&pos);
					delete_spe(pos);
					break;
				}
			case 4:
				{
					exit(0);	
				}
			default:
			{
				printf("invalid choice");
				}	
		}
	}while(choice!=0);
}
