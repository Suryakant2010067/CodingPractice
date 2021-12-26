#include<iostream>
using namespace std;
class person
{
	int age;
	string name;
	string address;
	public:
		void date()
		{
			cin>>age;
			cout<<"i am "<<age<<" years"<<endl;
		}
		void names()
		{
			cin>>name;
			cout<<"my name is "<<name<<endl;
			
		}
		void addres()
		{
			cin>>address;
			cout<<"i am from "<<address;
		}
		
	
};
int main()
{
	person obj;
	obj.date();
	obj.names();
	obj.addres();
}
