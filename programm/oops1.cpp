#include<iostream>
using namespace std;
class print
{	public:
		void show(int a,int b)
		{
			cout<<"sum="<<a+b;
		}
};
int main()
{
	print obj;
	int a,b;
	cout<<"enter the value";
	cin>>a>>b;
	obj.show(a,b);
}
