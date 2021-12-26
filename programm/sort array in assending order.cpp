#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the elemnt\n";
	for(int i=0;i<n;i++)//1 5 3 8 4
	{
		cout<<a[i]<<ends;
	}
	int k;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			
			}
		}
	}
	cout<<"\nsorted\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<ends;
	}
		
}
