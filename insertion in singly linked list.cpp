#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

void insfront(node** t)
{
	int a;
	node *q;
	q=new node;
	cout<<"Enter the element:"<<endl;
	cin>>a;
	q->data=a;
	q->next=*t;
	*t=q;
}

void insmidafter(node** t)
{
	int a,b;
	node *p,*q;
	p=*t;
	q=new node;
	cout<<"Enter node:"<<endl;
	cin>>a;
	cout<<"Enter the element:"<<endl;
	cin>>b;
	q->data=b;
	while(p->data!=a)
	p=p->next;
	q->next=p->next;
	p->next=q;
}

void insmidbefore(node** t)
{
	int a,b;
	node *p,*q;
	p=*t;
	q=new node;
	cout<<"Enter node:"<<endl;
	cin>>a;
	cout<<"Enter the element:"<<endl;
	cin>>b;
	q->data=b;
	while(p->next->data!=a)
	p=p->next;
	q->next=p->next;
	p->next=q;
}

void insend(node** t)
{
	int a;
	node* q,*s;
	s=new node;
	q=*t;
	cout<<"Enter the element:"<<endl;
	cin>>a;
	s->data=a;
	while(q->next!=NULL)
	q=q->next;
	q->next=s;
	s->next=NULL;
}

void display(node* t)
{
	while(t!=NULL)
	{
	cout<<t->data<<"->";
	t=t->next;
	}
	cout<<endl;
}
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
	do{
	cout<<"1.INSERT AT FRONT 2.INSERT IN MID AFTER THE ELEMENT"<<endl;
	cout<<"3.INSERT IN MID BEFORE THE ELEMENT 4.INSERT AT END 5.DISPLAY."<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:insfront(&p);
				break;
		case 2:insmidafter(&p);
				break;
		case 3:insmidbefore(&p);
				break;
		case 4:insend(&p);
				break;
		case 5:display(p);
				break;
	}	
	}while(a<6);
}
