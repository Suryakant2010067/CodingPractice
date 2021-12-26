#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node*head=NULL,*last=NULL;
void create(int data)
{
    struct Node *newnode= (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp =head;
    newnode->data = data;
    newnode->next = head;
    /* If linked list is not NULL then set the next of last node */
    if (head != NULL)
    {
        while (temp->next != head)
            temp = temp->next;
        temp->next =newnode;
    }
    else
        newnode->next =newnode; /*For the first node */
 
    head = newnode;
}
struct Node *addAfter(struct Node *last, int data, int item)
{
    if (last == NULL)
       return NULL;
 
    struct Node *temp, *p;
    p = last -> next;
 
    // Searching the item.
    do
    {
        if (p ->data == item)
        {
            // Creating a node dynamically.
            temp = (struct Node *)malloc(sizeof(struct Node));
 
            // Assigning the data.
            temp -> data = data;
 
            // Adjusting the links.
            temp -> next = p -> next;
 
            // Adding newly allocated node after p.
            p -> next = temp;
 
            // Checking for the last node.
            if (p == last)
                last = temp;
 
            return last;
        }
        p = p -> next;
    } while (p != last -> next);

    return last;
}
/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    if (head != NULL)
    {
        do
        {
            printf("->%d", temp->data);
            temp = temp->next;
        }
        while (temp != head);
    }
    printf("\n");
}
 
/* Driver program to test above functions */
int main()
{
	int data,choice,pos,item;
	do
	{
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("insert the value\n");
					scanf("%d",&data);
					create(data);
					break;
				}
			case 2:
					
					printf("Contents of Circular Linked List\n ");
   					 printList(head);
   					 break;
				
			case 3:
				{
					printf("enter the item\n");
					scanf("%d",&item);
					printf("enter the data for inserting\n");
					scanf("%d",&data);
					addAfter(last,data,item);
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
 
    return 0;
}
