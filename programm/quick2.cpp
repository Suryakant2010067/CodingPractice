#include<stdio.h>
void quick_sort(int a[],int start,int end)
{
	if(start<end)
	{
		int pivot=start;
		int i,j;
		i=start;
		j=end;
		while(i<j)
		{
			if(a[i]<=a[pivot])
			{
				i++;
			}
			if(a[j]>a[pivot])
			{
				j--;
			}
			if(j>i)
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		int temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quick_sort(a,start,j-1);
		quick_sort(a,j+1,end);
	}
	
}
int main()
{
	int i,n,min,j;
	printf("enter the number\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int start=0;
	int end=n-1;
	quick_sort(a,start,end);
	printf("\n sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
