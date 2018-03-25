#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp;
    temp=head1;
    Node* temp1=head1->next;
    head1->next=NULL;
    if(temp1){
            while(temp1->next){
            Node* temp2=temp1->next;
            temp1->next=temp;
            temp=temp1;
            temp1=temp2;
        }
        temp1->next=temp;
        head1=temp1;
    }
    
    temp=head2;
    temp1=head2->next;
    head2->next=NULL;
    if(temp1){
        while(temp1->next){
            Node* temp2=temp1->next;
            temp1->next=temp;
            temp=temp1;
            temp1=temp2;
        }
        temp1->next=temp;
        head2=temp1;    
    }
    
    temp1=head1;
    Node* temp2=head2;

    if(temp1==temp2){
        while(temp1->next==temp2->next){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1->data;
    }
    return -1;
}
