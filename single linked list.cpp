#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{	
	int a,i,n;  
	node *p,*q,*head;
	cout<<"Enter the number of nodes"<<endl;
	cin>>n;
	cout<<"Enter head node"<<endl;
	p=new node;
	cin>>a;
	p->data=a;
	p->next=NULL;
	head=p;
	for(i=1;i<n;i++)             
	{
	 	cout<<"Enter node"<<endl;
	 	q=new node;
		cin>>a;
		q->data=a;
		q->next=NULL;			 	
		p->next=q;
	 	p=p->next;		 	 	
	}
	p=head;
	for(i=0;i<n;i++)
	{
		cout<<p->data<<"->";
		p=p->next;
	}
}
	
	
	
	
