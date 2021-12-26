#include<iostream>
using namespace std;
class A
{
	private:
	int a,b;
	public:
		void show()
		{
			a=5;b=6;
		}
		friend class B;
};
class B
{
	public:
		void add(A r)
		{
			int c;
			c=r.a+r.b;
			cout<<"sum="<<c;
		}
};
int main()
{
	A r;
	r.show();
	B obj;
	obj.add(r);
}
