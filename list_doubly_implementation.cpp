#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
};
node* head;
void insert_at_head(int data){
	node* temp=new node;
	temp->data=data;
	if(head==NULL){
		head=temp;
		temp->next=NULL;
		temp->prev=NULL;
		return;
	} 	
	head->prev=temp;
	temp->next=head;
	temp->prev=NULL;
	head=temp;
}
void print(){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}
void print_rev(){
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->prev;
	}
}

int main(){
	head=NULL;
	insert_at_head(2);
	print();
	insert_at_head(3);
	print();
	insert_at_head(4);
	print();
	print_rev();
}
