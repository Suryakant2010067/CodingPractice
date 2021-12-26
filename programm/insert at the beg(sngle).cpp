#include<stdio.h>  
#include<stdlib.h>   
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;  
void create(int item)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
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
void delete_beg()  
{  
        struct node *newnode = (struct node *)malloc(sizeof(struct node));  
        if(head== NULL)  
        {  
        	printf("empty");  
        }  
        else  
        {  
			newnode->next=head;
			head=head->next;
			free(newnode);
           
       }
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
          
int main ()  
{  
    int choice,item;  
    do   
    {  
    	printf("enter the choice\n");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:
    			{
    				printf("Enter the item which you want to insert\n");  
       				 scanf("%d",&item);  
        			create(item);
        			break;
				}
			case 2:
			{
				traverse();
				break;
				}
			case 3:
			{
				delete_beg();
				break;
					}		
			case 4:
				{
					exit(0);
				}
			default:
			{
				printf("invalid choice\n");
				
			}
		}
	}
	while(choice!= 0);  
}  

