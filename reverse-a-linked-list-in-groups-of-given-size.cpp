#include<stdio.h>
#include<stdlib.h>
/* Link list node */
struct node
{
    int data;
    struct node* next;
}*head;

void insert()
{
    int n,value,i;
    scanf("%d",&n);
    struct node *temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
	printf(" ");
}



struct node *reverse (struct node *head, int k){
	struct node* temp1=head;
	struct node* h=head;
	struct node* temp=head;
	while(temp){
		int ctr=0;
		int arr[k];
		while(temp && ctr<k){
			arr[ctr]=temp->data;
			ctr++;
			temp=temp->next;
		}
		for(int i=ctr-1;i>=0;i--){
			h->data=arr[i];
			h=h->next;
		}
	} 
	return temp1;
}




/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    int t,k,value,n;
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     scanf("%d",&t);
     while(t--)
     {
     insert();
     scanf("%d",&k);
     head = reverse(head, k);
     printList(head);
     }
     return(0);
}


