#include<stdio.h>
#include<string.h>
int main()
{
	int k,i;
	char a[20];
	printf("enter the character:\n");
	gets(a);
	for(i=0;a[i]='\0';i++)
	{
	//	scanf("%s",&a[i]);
	//	printf("%d",a);
	//	int a;
		a[i]=a[i]+32;
	//	printf("%c",k);
	}
/*	printf("tha value\n");
	for(i=0;i<5;i++)
	{
		printf("%c\n",a[i]);
		printf("%d\n",a[i]);
		 a[i]+=32;
	}*/
	printf("%s",a);
/*	char s1[20];
	printf("enter the chara:\n");
	gets(strupr(s1));
	puts(strlwr(s1));*/
	
}
