#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	printf("sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		
	}
}
