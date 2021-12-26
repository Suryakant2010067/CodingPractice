#include<stdio.h>
int main()
{
	int n,m,j,i;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[i];
	printf("\nenter the element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe element:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);//2 4 5 7 8
	}
	int key;
	printf("\nenter the searche element:\n");
	scanf("%d",&key);//4
	int low;
	low=0;
	int high;
	high=n-1;
	int mid;
	mid=(low+high)/2;//2
	while(low<=high)
	{
		if(a[mid]<key)
		{
			low=mid+1;
			
		}
		else if(a[mid]==key)
		{
			printf("location=%d",mid+1);
			break;
		}
		else
		{
			high=mid-1;
		}
	}
	
}
