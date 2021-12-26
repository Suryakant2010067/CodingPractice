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
    head=newnode
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        struct node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode->next=head;
        temp->next=newnode;
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
int main()
{
    int value,choice;
    do{
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("insert the value\n");
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
                exit(0);
                
            }
            default:
            {
                printf("inavalid choice");
            }
        }
    }while(choice!=0);
}
