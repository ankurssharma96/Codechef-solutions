#include<stdio.h>
#include<stdlib.h>
// Linked list Node structure
struct Node
{
    char c;
    struct Node *next;
};
struct Node* newNode(char c)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->c = c;
    temp->next = NULL;
    return temp;
};


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// Compare two strings represented as linked lists
int compare(struct Node *list1, struct Node *list2){
	if(list1==NULL && list2==NULL)
		return 0;
	if(list1==NULL)
		return -1;
	if(list2==NULL)
		return 1;
		
	while(list1!=NULL || list2!=NULL){
		if(list1->c > list2->c){
			return 1;
		}
		else if(list1->c < list2->c){
				return -1;
		}
		list1=list1->next;
		list2=list2->next;
	}
	
	if(list1==NULL && list2==NULL)
		return 0;
	if(list1==NULL)
		return -1;
	if(list2==NULL)
		return 1;
}



// Driver program
int main()
{
    int t,n;
    
    scanf("%d",&t);
    
    char x;
    while(t--)
    {
        scanf("%d",&n);
        scanf("%c",&x);
        
        struct Node *list1 = newNode(x);
        struct Node *temp=list1;
        int i;
        for(i=0; i<n-1; i++)
        {
            scanf(" %c",&x);
            temp->next = newNode(x);
            temp=temp->next;
        }
        int m;
        scanf("%d",&m);
        scanf("%c",&x);
        struct Node *list2 = newNode(x);
        temp=list2;
        for(i=0; i<m-1; i++)
        {
            scanf(" %c",&x);
            temp->next = newNode(x);
            temp=temp->next;
        }
        printf("%d", compare(list1, list2));
    }
    return 0;
}

