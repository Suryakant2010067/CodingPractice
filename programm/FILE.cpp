#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream newFile("c:user\\WIN10\\Desktop\\CPP.txt");
	cout<<"File created...";
	newFile.close();
	return 0;
	
}
