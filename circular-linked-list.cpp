// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
bool isCircular(struct Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        if (k==1 && n >= 1)
              tail->next = head;
    printf("%d", isCircular(head));
    }
    return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return true if linked list is circular, else false */

Node* isLoop(Node *head){
    Node* fast=head;
    Node* slow=head;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
bool isCircular(Node *head){
    if(head==NULL)
        return true;
    
    Node *temp=isLoop(head);
    if(temp==NULL){
        return false;
    }
    Node* temp1=temp->next;
    while(temp1!=head && temp1!=temp){
        temp1=temp1->next;
    }
    if(temp1==head)
        return true;
    else
        return false;
}


