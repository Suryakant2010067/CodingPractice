#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the element\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	printf("sorted array\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
