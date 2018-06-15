#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
void push(struct Node ** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		cout<<temp->data<<' ';
		temp = temp->next;
	}
	cout<<' ';
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

void mergeList(struct Node **head1, struct Node **head2){
	struct Node* temp1=*head1;
	struct Node* temp2=*head2;
	while(temp1->next && temp2->next){
		struct Node* temp;
		temp=temp2->next;
		temp2->next=temp1->next;
		temp1->next=temp2;
		
		temp1=temp2->next;
		temp2=temp;
	}
	if(temp2){
		struct Node* temp;
		temp=temp2->next;
		temp2->next=temp1->next;
		temp1->next=temp2;
		
		temp1=temp2->next;
		temp2=temp;
	}
	*head2=temp2;
}




// Driver program to test above functions
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n1, n2, tmp;
        struct Node *a = NULL;
        struct Node *b = NULL;
        cin>>n1;
        while(n1--){
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>n2;
        while(n2--){
            cin>>tmp;
            push(&b, tmp);
        }
        mergeList(&a, &b);
        printList(a);
        printList(b);
    }
	return 0;
}
