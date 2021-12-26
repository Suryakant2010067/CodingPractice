#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter the size of array:\n";
	cin>>n;
	int a[n];
	cout<<"enter the element\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<ends;
		
	}
	for(i=0;i<n;i++)
	{
		int c=a[i];
		int j=i+1;
		if(a[i]>a[j]&&j>0)
		{
			a[i]=a[j];
			j=j-1;
		}
		a[i]=a[j];
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<ends;
		
	}
}
