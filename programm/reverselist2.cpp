#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node*next;
};
struct node*head;
void reverse_list()
{
	struct node*temp=head,*current=head,*result=NULL;
	while(current!=NULL)
	{
		temp=current;
		current=current->next;
		temp->next=result;
		result=temp;
	}
	head=result;
}
void reverse(int value)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=head;
	head=newnode;
}
void print()
{
	struct node*temp=head;
	while(temp!=NULL)
	{
		cout<<"->"<<temp->data;
		temp=temp->next;
	}
	cout<<"NULL\n";
}
int main()
{
	int i,n,value;
	cout<<"enter the size of list";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the value";
		cin>>value;
		reverse(value);
	}
	print();
	reverse_list();
	print();
}
