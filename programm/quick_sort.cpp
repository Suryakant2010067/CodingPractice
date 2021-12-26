#include<stdio.h>
//using namespace std;
int partition(int a[],int start,int end)
{
	
	int pivot=a[end];//2,7,4,9,8
	
	if(start<end)
	{
		/*int lw=0;
		int upw=n-1;
		 start=lw;
		int end=upw;
		int pivot=0;//2,7,4,9,8*/
	
		while(start<end)
		{
			while(a[start]<=a[pivot])
			{
				start++;
			}
			while(a[end]>a[pivot])
			{
				end--;
			}
			if(start<end)
			{
				int k=a[start];
				a[start]=a[end];
				a[end]=a[start];
				return start;
			}
		}
	
		int k=a[end];
		a[end]=a[pivot];
		a[pivot]=a[end];
		return end;
	}
}

void quick(int a[],int start, int end) /* a[] = array to be sorted, start = Starting index, end = Ending index */  
{  
    if (start < end)  
    {  
        int p=partition(a,start,end); //p is the partitioning index  
        quick(a,start,p-1);  
        quick(a,p+1,end);  
    }  
}  
int main()
{
	int n,i,lw=0;
	printf("Enter Array Size\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	int upw=n-1;
	quick(a,lw,upw);
	printf("print quick sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
