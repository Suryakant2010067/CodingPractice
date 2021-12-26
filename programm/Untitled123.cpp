#include<stdio.h>
#define m 20
int top=-1;
int stack[m];
void push(int h)
{
    if(top==m-1)
    {
        printf("overflow\n");
        return;
    }
    else
    {
        top++;
        stack[top]=h;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
        top--;
}
void print()
{
    int i;
    printf("stack:");
    for(i=0;top>=i;i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{
    int i,h;
    int ch;
    printf("case 1:push\n");
    printf("case 2:pop\n");
    //printf("case 3:print\n");
    for(i=0;i<5;i++)
    {
        printf("enter the case\n");
        scanf("%d",&ch);
        switch(ch);
        {
            case1:
            {
            	for(i=0;i<5;i++){
			
                printf("enter the push element:\n");
                scanf("%d",&h);
                push(h);
                print();
            	}
                //break;
            
            }
            case2:
            {
            	for(i=0;i<5;i++){
			
                printf("pop element:\n");
                pop();
                print();
                }
                break;
            
            }
          //  default:
           // {
           //     printf("list is ivalid");
           // }
        }
    }

}
