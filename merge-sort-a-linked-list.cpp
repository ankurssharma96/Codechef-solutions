#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};







/* split the nodes of the given list into front and back halves,
     and return the two lists using the reference parameters.*/
void splitList(struct node* source, struct node** frontRef, struct node** backRef)
{
    struct node* fast;
    struct node* slow;
    slow = source;
    fast = source->next;
    while (fast != NULL)
    {
	    fast = fast->next;
	    if (fast != NULL)
	    {
	        slow = slow->next;
	        fast = fast->next;
	    }
    }
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}



// merges two sorted list into one big list
struct node* mergeList(struct node* a, struct node* b)
{
//	cout<<"working";
	struct node* result;
	struct node* temp1=a;
	struct node* temp2=b;
	struct node* ptr;
	
	if(temp2==NULL)
		result=temp1;
	else if(temp1==NULL)
		result=temp2;
	else if(temp1->data <= temp2->data){
		result=temp1;
		temp1=temp1->next;
	}
	else{
		result=temp2;
		temp2=temp2->next;
	}
		
		
	ptr=result;
	while(temp1 && temp2){
		if(temp1->data <= temp2->data){
			ptr->next=temp1;
			temp1=temp1->next;
		}
		else{
			ptr->next=temp2;
			temp2=temp2->next;
		}
		ptr=ptr->next;
	}
	if(temp1)
		ptr->next=temp1;
	else if(temp2)
		ptr->next=temp2;
	else 
		ptr->next=NULL;
	
	return result;
}














void mergeSort(struct node** headRef)
{
    struct node* head = *headRef;
    struct node* a;
    struct node* b;
    if ((head == NULL) || (head->next == NULL))return;
    splitList(head, &a, &b); 
    mergeSort(&a);
    mergeSort(&b);
    *headRef = mergeList(a, b);
}
void printList(struct node *node)
{
    while(node!=NULL){
        printf("%d ", node->data);
        node = node->next;
    }
    printf(" ");
}
void push(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref); 
    (*head_ref) = new_node;
} 
int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        long n, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        mergeSort(&a);
        printList(a);
    }
    return 0;
}


