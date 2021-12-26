#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void delete_specific(int pos)
{
	struct node*pre=(struct node*)malloc(sizeof(struct node));
	int i;
	if(pos==0)
	{
		head=pre;
		return;
	}
	else if(pos==1)
	{
		pre->next=head;
		head=head->next;
		free(pre);
	}
	else
	{
			struct node*temp=head,*pre=head;
			for(i=1;i<pos-1;i++)
			{
				pre=temp;
				temp=temp->next;
			}
			pre->next=temp->next;
			temp->next=pre->next;
		//	temp->next=NULL;
			
			free(pre);
	
	}
}
void insert(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	newnode->next=head;
	head=newnode;
}
void traverse()
{
			struct node*temp2=head;
			while(temp2!=NULL)
			{
				printf("->%d",temp2->data);
				temp2=temp2->next;
			}
			printf("\n");
}

int main()
{
	int choice,value,pos,item;
	do
	{
		printf("enter the choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("enter the value:\n");
					scanf("%d",&value);
					insert(value);
					break;
				}
			case 2:
				{
					traverse();
					break;
				}
			case 3:
				{
					printf("enter the pos:\n");
					scanf("%d",&pos);
					delete_specific(pos);
					break;
				}
			case 4:
				{
					exit(0);
					break;
				}
			default:
					{
						printf("invalid choice:\n");
					}
		}
	}while(choice!=0);
}
