#include<stdio.h>
char tower_Hanoi(int,char,char,char);
int main()
{
    int n;
    char a='A',b='B',c='C';
    printf("enter the disk:");
    scanf("%d",&n);
    tower_Hanoi(n,a,b,c);
}
char tower_Hanoi(int n,char a,char b,char c)
{
    tower_Hanoi((n-1),a,c,b);
    printf("tower of hanoi=%c->%c",a,b);
    tower_Hanoi((n-1),c,b,c);
}
