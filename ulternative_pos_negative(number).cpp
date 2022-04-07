
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void r(int arr[], int n) 
{
	    
	    // code here
	    vector<int> t;
	    vector<int> t1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            t.push_back(arr[i]);
	            
	        }
	        else
	        {
	            t1.push_back(arr[i]);
	        }
	    }
	    int y=0,z=0;
	    int d=t1.size();
	    int d2=t.size();
	    int i;
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0&&d2>0)
	        {
	            arr[i]=t[y];
	            y++;
	            d2--;
	        }
	        else if(d>0)
	        {
	            arr[i]=t1[z];
	            z++;
	            d--;
	        }
	        else
	        {
	            break;
	        }
	    }
	   for(int j=y;i<n;j++)
	    {
	        arr[i]=t[j];
	        i++;
	    }
	    for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
}
int main()
{
    int arr[] ={4,5,6,7,-1};
    r(arr,5);
    //return 0;9 -2 4 -1 5 -5 0 -3 2
}
