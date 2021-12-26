#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next,*pre;
};
struct node*head;
void creat(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->pre=NULL;
	newnode->next=NULL;
	newnode->next=head;
	head->pre=newnode;
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
					creat(value);
					break;
				}
			case 2:
				{
					traverse();
					break;
				}
			case 3:
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
