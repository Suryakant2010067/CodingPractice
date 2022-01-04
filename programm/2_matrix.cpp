#include<iostream>
using namespace std;
int main()
{
	int i,j,a[2][4],b[2][4],sum=0;
	cout<<"enter the element:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	printf("hii");
	
	
	

	cout<<"\nthe first matrix\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"enter the element:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"\nthe second matrix\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<b[i][j];
		}
		cout<<"\n";
	}
	cout<<"\nthe sum of matrix\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			sum=a[i][j]-b[i][j];
			cout<<sum<<ends;
		}
		cout<<"\n";
	}
}
