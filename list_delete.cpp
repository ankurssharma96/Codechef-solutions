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


void delete_list(int n){
	node* temp=head;
	if(n==1)
	{
		head=temp->next;
		delete temp;
		return;
	}
	if(head==NULL){
		cout<<"empty list\n";
	}
	else{
		for(int i=0;i<n-2;i++){
			temp=temp->next;
		}
		node* temp1=temp->next;//to be deleted
		temp->next=temp1->next;
		delete temp1;
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
		insert(7);
	print();
		insert(8);
	print();
		insert(9);
	print();
	delete_list(2);
	print();
	delete_list(1);
	print();
}
