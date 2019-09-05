#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

void delfront(node** t)
{
	node *q;
	q=*t;
	(*t)=(*t)->next;
	delete q;
}

void delmid(node** t)
{
	int a;
	node *p,*q;
	p=*t;
	cout<<"Enter node to be deleted:"<<endl;
	cin>>a;
	while(p->next->data!=a)
	p=p->next;
	q=p->next;
	p->next=p->next->next;;
	delete q;
}

void delend(node** t)
{
	node *p,*q;
	p=*t;
	while(p->next->next!=NULL)
	p=p->next;
	q=p->next;
	p->next=NULL;
	delete q;
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
	cout<<"1.DELETE AT FRONT 2.DELETE IN MID"<<endl;
	cout<<"3.DELETE AT END 4.DISPLAY. 5.EXIT"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:delfront(&p);
				break;
		case 2:delmid(&p);
				break;
		case 3:delend(&p);
				break;
		case 4:display(p);
				break;
	}	
	}while(a<5);
}
