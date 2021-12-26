#include<stdio.h>  
#include<stdlib.h>
void printlist();  

struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;  
int main ()  
{  
    int choice,item,i,n;  
    printf("enter teh size of list:");
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {  
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
		struct node*newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=item;
		newnode->next=head;
		head=newnode;
		if(head==NULL)
		{
			head=newnode;
			newnode->next=head;
		}  
		else
		{
			newnode->next=head;
			head=newnode;
			struct node*temp=head;
			printlist();
		//	while(temp!=NULL)
		//	{
				
		//	}
		}
    }
    //printlist();
    //printf("insert the list");
}  
void printlist()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
}
      
