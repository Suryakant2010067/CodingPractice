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
void insert_at_spef(int pos,int k)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=k;
    struct node*temp=head;
    int i=1;
    if(pos==1)
    {
        	newnode->next=temp;
    		head=newnode;
    		return;
    }

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
    int n,pos,k,i,value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the size of list:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value:\n");
        scanf("%d",&value);
        store(value);
    }
    printf("insert the value:\n");
    scanf("%d",&k);
    printf("enter the position:\n");
    scanf("%d",&pos);
    insert_at_spef(pos,k);
    printlist();
    
}
