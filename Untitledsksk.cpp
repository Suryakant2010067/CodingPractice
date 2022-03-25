#include<stdio.h>
void quick_sort(int a[],int start,int end)
{
	int pivot;	
	int i;
	int j;
	if(start<end)
	{
		 pivot=start;	
		i=start;
		 j=end;
	
		while(j>i)
		{
			while(a[pivot]>=a[i])
			{
				i=i+1;
			}
			while(a[pivot]<a[j])
			{
				j=j-1;
			}
			if(i<j)
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		int temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		quick_sort(a,start,j-1);
		quick_sort(a,j+1,end);
	}
	
}
int main()
{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elemenet\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
