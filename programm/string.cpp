#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="surya";
	char b[11]="suryakanta";
	char c[10]={'s','u','r','y','a'};
	char d[]={'s','u','r','y','a'};
	printf("%d\n",sizeof(a));//5
	printf("%d\n",sizeof(b));//10
	printf("a=%d\n",strlen(a));
	printf("%d\n",sizeof(c));//10
	printf("%d\n",sizeof(d));//5
	int f[10]={1,2,3,4,5,6,7,8,9};
	printf("%d",sizeof(f));
}
