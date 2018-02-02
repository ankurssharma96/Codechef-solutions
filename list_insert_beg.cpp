#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
node* head;


void print(){
	node* temp=head;
	if(temp==NULL)
	{
		cout<<"empty list";
	}
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}

void insert(int data){
	node* temp=new node;
	temp->data=data;
	
	if(head==NULL)
	{
		head=temp;	
		temp->next=NULL;
	}
	else{
		temp->next=head;
		head=temp;
	}
	
}



int main()
{
	head=NULL;
	print();
	insert(5);
	print();
	insert(4);
	print();
	insert(3);
	print();
}
