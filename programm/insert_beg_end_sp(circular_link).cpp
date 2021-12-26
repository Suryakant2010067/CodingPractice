#include<iostream>
using namespace std;
 
struct Node
{
    int data;
    struct Node *next;
};
 
struct Node *addToEmpty(struct Node *last, int data)
{
    // This function is only for empty list
    if (last != NULL)
      return last;
 
    // Creating a node dynamically.
    struct Node *temp =
           (struct Node*)malloc(sizeof(struct Node));
 
    // Assigning the data.
    temp -> data = data;
    last = temp;
 
    // Creating the link.
    last -> next = last;
 
    return last;
}
 
struct Node *addBegin(struct Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);
 
    struct Node *temp =
            (struct Node *)malloc(sizeof(struct Node));
 
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
 
    return last;
}
 
struct Node *addEnd(struct Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);
     
    struct Node *temp =
        (struct Node *)malloc(sizeof(struct Node));
 
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
    last = temp;
 
    return last;
}
 
struct Node *addAfter(struct Node *last, int data, int item)
{
    if (last == NULL)
        return NULL;
 
    struct Node *temp, *p;
    p = last -> next;
    do
    {
        if (p ->data == item)
        {
            temp = (struct Node *)malloc(sizeof(struct Node));
            temp -> data = data;
            temp -> next = p -> next;
            p -> next = temp;
 
            if (p == last)
                last = temp;
            return last;
        }
        p = p -> next;
    }  while(p != last -> next);
 
    cout << item << "\nnot present in the list." << endl;
    return last;
 
}
 
void traverse(struct Node *last)
{
    struct Node *p;
 
    // If list is empty, return.
    if (last == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
 
    // Pointing to first Node of the list.
    p = last -> next;
 
    // Traversing the list.
    do
    {
        cout << p -> data << " ";
        p = p -> next;
    }
    while(p != last->next);
    printf("\n");
}
 
// Driven Program
int main()
{
    struct Node *last = NULL;
    int choice,value,item;
    do{
        printf("enter the chocie\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("enter the value\n");
                scanf("%d",&value);
                last=addToEmpty(last,value);
                break;
            }
            case 2:
            {
                printf("enter the value\n");
                scanf("%d",&value);
                last=addBegin(last,value);
                break;
            }
            case 3:
            {
                printf("enter the value\n");
                scanf("%d",&value);
                last=addEnd(last,value);
                break;
            }
            case 4:
            {
                printf("enter the value\n");
                scanf("%d",&value);
                printf("enter the item\n");
                scanf("%d",&item);
                last=addAfter(last,value,item);
                break;
            }
            case 5:
            {
                traverse(last);
                break;
            }
            case 6:
            {
                exit(0);
            }
        }
    }while(choice!=0);
 
    return 0;
}
