#include<stdio.h>
int main()
{
	int n,i;
	printf("enetr the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	
		printf("%d",&a[i]);
	}
	int pos,item;
	printf("enter the item to insert at array");
	scanf("%d",&item);
	printf("enter the pos\n");//size 5=2,6,8,9,3
	scanf("%d",&pos);
	for(i=n-1;(pos-1)<=i;i--)//4,3 2
	{
		a[i+1]=a[i];//          8 9 3
	}
	a[pos-1]=item;
	for(i=0;i<n;i++)
	{
		printf("%d",&a[i]);
	}
}
