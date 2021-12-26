#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n the element:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int key,location;
	printf("\nenter key of element:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)//34572
		{
			location=i+1;
			printf("location=%d",location);
			count=1;
		}
	}
	if(count==0)
	{
		printf("not key availabe in array");
	}
}
