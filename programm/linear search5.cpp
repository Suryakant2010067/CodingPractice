#include<stdio.h>
#define N 20
int main()
{
	int i,n,a[N];
	printf("enter the size of array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("print the array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int count=0;
	printf("\nenter the searching element:\n");
	int iteam;
	scanf("%d",&iteam);
	for(i=0;i<n;i++)
	{
		if(a[i]==iteam)
		{
			printf("searching element position=%d",i+1);
			count=1;
		}
		
		
	}
	if(count==0)
	{
		printf("not found itam:");
	}
}
