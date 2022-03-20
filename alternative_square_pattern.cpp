#include <stdio.h>

int main(void) {
    int n,m=5;
    int k=1,p=1,l;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	if(i==p)
    	{
        	for(int j=1;j<=5;j++)
       		 {
        	    printf("%d ",k);
        	    k++;
       		 }
        	printf("\n");
        	p=p+2;
        }
        else
        {
        	l=k+4;
        	
        	for(int j=1;j<=5;j++)
       		 {
        	    printf("%d ",l);
        	    l--;
       		 }
        	printf("\n");
        	p=p;
        	k=k+5;
		}
    
    }
	// your code goes here
	return 0;
}


