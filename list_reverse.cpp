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

void reverse(){
	node* temp=head;
	node* prev=NULL;
	node*temp_next;
	while(temp!=NULL){
		temp_next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=temp_next;
	}
	head=prev;
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
		insert(7);
	print();
		insert(8);
	print();
		insert(9);
	print();
	reverse();
	print();
}
