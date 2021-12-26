#include<stdio.h>
#define n 30
int main()
{
	int i,j,m,a[n],b[n],c[n],n1=5,n2;
	printf(" first array element:");
//	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("\nenter the element:\n");
    for(i=0;i<n1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n second array element:\n");
//	scanf("%d",&n2);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&b[i]);
	}
    printf("\nenter the element:\n");
    for(i=0;i<n1;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	for(i=0;i<n1;i++)
	{
		c[i]=(a[i]*b[i]);
		printf("%d\t",c[i]);
	}
}
