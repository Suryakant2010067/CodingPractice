#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//3,4,6,1,9,7
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	int key,count=0;
	printf("\nenter the key\n");
	scanf("%d",&key);
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	while(start<=end)
	{
		//int mid=(start+end)/2;
		if(a[mid]==key)
		{
			printf("location=%d ",mid+1);
			break;
			count++;
		}
		else if(a[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			start=mid-1;
		}
	}
	if(count!=0)
	{
		printf("not present in array");
	}
}
