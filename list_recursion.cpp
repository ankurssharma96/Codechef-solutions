#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
node* head;
node* last;
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
void print(node* temp){
	if(temp == NULL){
		cout<<"\n";
		return;	
	}
	cout<<" "<<temp->data;
	last=temp;
	print(temp->next); 
}
node* temp5;
void reverse(node* last){
	node* temp1=head; 
	if(last==head){
		exit(0);
	}
	
	while(temp1->next!=last){
		temp1=temp1->next;
	}
	cout<<" "<<temp1->data;
	reverse(temp1);
	return;
}

int main()
{
	head=NULL;
	insert(5);
	insert(4);
	insert(3);
	insert(7);
	insert(8);
	insert(9);
	print(head);
	cout<<" "<<last->data;
	reverse(last);
	print(head);
}
