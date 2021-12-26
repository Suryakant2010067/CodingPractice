#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
	public:
	int data;
	struct node*next;
};
struct node*head;
int main()
{
	int i,n,value;
	cout<<"enter the size of list";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the value\n";
		cin>>value;
		struct node*temp=(struct node*)malloc(sizeof(struct node));
		temp->data=value;
		temp->next=NULL;
		temp->next=head;
		head=temp;
	/*	while(temp!=NULL)
		{
			cout<<"->"<<temp->data;
			temp=temp->next;
		}
		cout<<"->NULL\n";*/
	}
	struct node*temp=head;
	while(temp!=NULL)
	{
			cout<<"->"<<temp->data;
			temp=temp->next;
	}
		cout<<"->NULL\n";
}
