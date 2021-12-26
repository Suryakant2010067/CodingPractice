#include<iostream>
using namespace std;
class patel;
class surya
{
	private:
	int a;
	public:
		void sow()
		{
			a=60;
			cout<<"surya="<<a<<endl;
		}
		friend abhisek(surya p,patel p1 );
};
class patel
{
	private:
	int b;
	public:
		void sow()
		{
			b=40;
			cout<<"patel="<<b<<endl;
		}
		friend void abhisek(surya p,patel p1);
};
void abhisek(surya p,patel p1)
{
	int c;
	c=p.a+p1.b;
	cout<<"abhisek="<<c;
}
int main()
{
	surya a2;
	a2.sow();
	patel a3;
	a3.sow();
	abhisek(a2,a3);
	return 0;
}
