#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;
Node* arb;
};
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    new_node->arb=NULL;
    return new_node;
}
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL )
{
int k;
if(temp->arb==NULL)k=-1;
else k=temp->arb->data;
cout<<temp->data<<" "<<k<<" ";
temp=temp->next;
}
}
Node * copyList(Node *head);
void append( Node** head_ref, Node **tail_ref, int new_data)
{
    Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    new_node->arb=NULL;
    if (*head_ref == NULL){
       *head_ref = new_node;
    }
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
bool validation(Node *head,Node * res,Node *cloned_addr,Node *generated_addr)
{
    if(generated_addr==cloned_addr)
        return false;
	Node* temp1 = head;
	Node *temp2 = res;
	int len1=0,len2=0;
	while(temp1!=NULL)
	{
		len1++;
		temp1=temp1->next;
	}
	while(temp2!=NULL)
	{
		len2++;
		temp2 = temp2->next;
	}
	/*if lengths not equal */
	if(len1!=len2)
	return false;
	temp1= head;
	temp2=res;
	while(temp1!=NULL)
	{
		if(temp1->data!=temp2->data)
		return false;
		if(temp1->arb!=NULL and temp2->arb!=NULL)
		{
			if(temp1->arb->data!=temp2->arb->data)
			return false;
		}else if(temp1->arb!=NULL and temp2->arb==NULL)
			return false;
		temp1= temp1->next;
		temp2=temp2->next;
	}
	return true;
}
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
  Node* generated_addr=NULL;
/*reading input stuff*/
    cin>>T;
    while(T--){
    generated_addr=NULL;
    struct Node *head = NULL,  *tail = NULL;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
       for(int i=0;i<k;i++){
       int a,b;
       cin>>a>>b;
       Node *tempA=head;
       int count=-1;
       while(tempA!=NULL)
       {
           count++;
           if(count==a-1)
            break;
           tempA=tempA->next;
       }
       Node *tempB = head;
       count=-1;
       while(tempB!=NULL)
       {
           count++;
           if(count==b-1)
            break;
           tempB=tempB->next;
       }
       //when both a is greater than N
       if(a<=n)
       tempA->arb = tempB;
       }
/*read finished*/
       generated_addr=head;
       Node *res = copyList(head);
       Node *cloned_addr = res;
       cout<<validation(head,res,cloned_addr,generated_addr)<<endl;
       }
    return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  the node structure is as follows 
struct Node
{
int data;
Node* next;
Node* arb;
};*/
// Should return the head of the copied linked list the 
//output will be 1 if successfully copied
Node * copyList(Node *head){
    
    map<Node*,Node*> m;
    
    Node* he=new Node;
    he->data=head->data;
    m.insert(make_pair(head,he));
    
    Node* temp1=he;
    Node* temp=head;
    
    while(temp->next){
        Node* new_node=new Node;
        m.insert(make_pair(temp->next,new_node));
        new_node->data=temp->next->data;
        
        temp1->next=new_node;
        temp1=new_node;
        temp=temp->next;
    }
    temp1->next=NULL;
    
    temp1=he;
    temp=head;
    while(temp){
        if(temp->arb==NULL){
            temp1->arb=NULL;
        }
        else{
            Node* tarb=temp->arb;
            temp1->arb=m.find(tarb)->second;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    return he;
}
