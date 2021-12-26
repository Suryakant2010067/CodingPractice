#include<stdio.h>
int partition(int[],int,int);
void swap(int*, int*);
void quickSort(int arr[],int start,int end)
{
    if(start < end)
    {
        int pIndex=partition(arr,start,end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int lower= start;
    int pivot = arr[end];
    int i;
    for(i = start; i < end; i++)
    {
        if(arr[i] < pivot)
        {
			swap(&arr[i], &arr[lower]);
			int x=arr[i];int y=arr[lower];
			int t=x;
   			 x=y;
    		y=t;
            lower++;
        }
    }
    swap(&arr[end], &arr[lower]);
    int x=arr[end];int y=arr[lower];
    int t=x;
   	x=y;
    y=t;
    return lower;
}

/*void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}*/
int main()
{
    int n,i;
	printf("Enter Array Size\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,n-1);
   	printf("print quick sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

