// C program to delete a given key from
// linked list.
#include<bits/stdc++.h>
using namespace std;
/* structure for a node */
struct Node
{
	int data;
	struct Node *next;
};
Node *pre=NULL;


/* Function to delete a given node from the list */
void deleteNode(struct Node **headRef, int key){
	struct Node* head=*headRef;
	
	int non=0;			//to get no of nodes
	struct Node* temp=head;
	if(temp==NULL){
		non=0;
		return;
	}
	/*else if(temp->next->data==head->data){
		non=1;
	}*/
	else{
		temp=temp->next;
		non++;
		while(temp!=head){
			temp=temp->next;
			non++;
		}
	}
	
	temp=head;
	if(non==1 && key==head->data){//no of nodes is 1 only
		head=NULL;
		*headRef=head;
		free(temp);
		return;
	}
	
	int ctr=0;
	while(temp->data!=key){
		temp=temp->next;
		ctr++;					//which(th) node needs to be deleted
	}

	if(ctr==0){					//1st node to be deleted
		temp=head->next;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=head->next;
		free(head);
		head=temp->next;
		*headRef=head;
		return;
	}
	else{
		temp=head;
		while(temp->next->data!=key){
			temp=temp->next;
		}
		struct Node* temp1=temp->next;
		temp->next=temp1->next;
		free(temp1);
		return;
	}
}

void reverse(struct Node** headRef){
	struct Node* head=*headRef;
	
	if(head==NULL){
		return;
	}
	
	struct Node* temp=head;
	struct Node* nxt=temp->next;
	struct Node* prev=NULL;
	
	if(nxt==head){		//only one node
		return;
	}
	
	while(nxt->next!=head){
		temp->next=prev;
		prev=temp;
		temp=nxt;
		nxt=nxt->next;
	}
	temp->next=prev;
	nxt->next=temp;
	head->next=nxt;
	head=nxt;
	*headRef=head;
	return;
}

/* Function to insert a node at the beginning of
a Circular linked list */
void push(struct Node **head_ref, int data)
{
	// Create a new node and make head as next
	// of it.
      struct Node *curr =
		(struct Node *)malloc(sizeof(struct Node));
    curr->data=data;
    curr->next=curr;
    
	if(*head_ref==NULL)
    {
      //  cout<<"Woreks"<<endl;
        *head_ref=curr;
        curr->next=*head_ref;
        pre=*head_ref;
    }
    else
    { //cout<<"Woreks2"<<endl;
        curr->next=*head_ref;
        pre->next=curr;
        pre=pre->next;
    }
}
/* Function to print nodes in a given
circular linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	if (head != NULL)
	{
		do
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		while (temp != head);
	}
    else
    cout<<"empty"<<endl;
	printf(" ");
}
/* Driver program to test above functions */
int main()
{
	/* Initialize lists as empty */
	int t,a,delnode;
	cin>>t;
	while(t--)
	{
        pre=NULL;
	   Node *head=NULL;
      
        int n;
	    cin>>n;
	    while(n--)
	    {
	        cin>>a;
	        push(&head,a);
	    }    
	/* Created linked list will be 2->5->7->8->10 */
	cin>>delnode;
//	printList(head);
	deleteNode(&head, delnode);
	//printList(head);
	reverse(&head);
	printList(head);
  //  cout<<head->data<<endl;
}
	return 0;
}



