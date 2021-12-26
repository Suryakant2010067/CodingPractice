#include <stdio.h>
#include<stdlib.h>
int size=10;
int queue[10];
int rear=-1,front=-1;
void enqueue(int value)
{
    if(rear==size-1)
    {
        printf("overflow");
        exit(0);
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=value;
        
    }
    else
    {
        rear=rear+1;
        queue[rear]=value;
    }
}
void dequeue()
{
    if(front==-1&&front>rear)
    {
        printf("underflow");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("dequeue=%d",queue[front]);
        front=front+1;
    }
}
void display()
{
    if(rear==-1)
    {
        printf("queue is empty");
        
    }
    else
    {
        for(int i=front;i<=rear;i--)
        {
            printf("%d ",queue[i]);
        }
    }
    
}


int main()
{
    int value,choice;
    do
    {
        printf("\nenter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("insert tha value in queue\n");
                scanf("%d",&value);
                enqueue(value);
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
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

