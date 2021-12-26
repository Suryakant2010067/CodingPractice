#include<stdio.h>
int main()
{
	int a=3,b=1,c=2;
	b=b^a^c*2;
	printf("%d\n",a);
	if(b&&c)
	{
		b=1;
		if(a)
		{
			a=a*a%5;
			printf("%d\n",a);
		}
		c=0;
	}
	printf("%d\n",b);
	printf("%d",a+b+c);
}
