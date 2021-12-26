#include<stdio.h>
void rotation(int *arr,int n)
{
		int temp=arr[0];
		for(int i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];
			
		}
		arr[n-1]=temp;
		printf("pr");
}
int main()
{
	int n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	int arr[n];
	printf("\n enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	int pos,k=0;
	printf("\n enter the position\n");
	scanf("%d",&pos);
	for(i=0;i<pos;i++)
	{
		printf("%d",arr[i]);
		//rotation(arr,n);
		int temp=arr[0];
		for(int i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];
			
		}
		arr[n-1]=temp;
	}
	printf(" final result after rotation\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
