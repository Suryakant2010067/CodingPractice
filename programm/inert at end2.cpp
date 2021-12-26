#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void addLast(struct node **head, int val)
{
    struct node *newNode =(struct node*) malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next= NULL;
    if(*head == NULL)
         *head = newNode;
    else
    {
        struct node *temp1= *head;
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = newNode;
         struct node *temp2 = *head;
        while(temp2!= NULL)
        {
             printf("%d->", temp2->data);
             temp2 = temp2->next;
         }
         printf("NULL\n");
    }
}
int main()
{
     struct node *head = NULL;
     int n,value;
     printf("enter the size of list:");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
         printf("\nenter the element:\n");
         scanf("%d",&value);
         addLast(&head,value);
     }

     return 0;
}



