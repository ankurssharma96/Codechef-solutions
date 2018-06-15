#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf(" ");
}
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	(struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}



bool isPresent (struct node *head, int data)
{
    struct node *t = head;
    while (t != NULL)
    {
        if (t->data == data)
            return 1;
        t = t->next;
    }
    return 0;
}

struct node *findIntersection(struct node *head1, struct node *head2)
{
    struct node *result = NULL;
    struct node *t1 = head1;
 
    // Traverse list1 and search each element of it in
    // list2. If the element is present in list 2, then
    // insert the element to result
    while (t1 != NULL)
    {
        if (isPresent(head2, t1->data))
            push (&result, t1->data);
        t1 = t1->next;
    }
 
    return result;
}

/*
struct node* findIntersection(struct node *head1, struct node *head2)
{
    struct node *result = NULL;
    struct node *t1 = head1;
 
    // Traverse list1 and search each element of it in
    // list2. If the element is present in list 2, then
    // insert the element to result
    while (t1 != NULL)
    {
        if (isPresent(head2, t1->data))
            push (&result, t1->data);
        t1 = t1->next;
    }
 
    return result;
}

*/
/*

struct node* findIntersection(struct node* head1, struct node* head2)
{
    struct node* temp1=head1;
    set<int> mset;
    multiset<int> mset2;
    while(temp1){
    	mset.insert(temp1->data);
    	temp1=temp1->next;
	}
	
	struct node* temp2=head2;
	while(temp2){
		int num=temp2->data;
		if(mset.find(num)!=mset.end())
			mset2.insert(num);
		temp2=temp2->next;
	}
	
	struct node *result = NULL;
	multiset<int>::reverse_iterator it;
	for(it=mset2.rbegin();it!=mset2.rend();it++){
		push (&result,*it);
	}
	return result;
	/*int ctr=1;
	if(mset2.size()){
		temp1=head1;
		for(it=mset2.begin();it!=mset2.end();it++){
			temp1->data=*it;
			if(ctr==mset2.size())
				temp1->next=NULL;
			else
				temp1=temp1->next;
			ctr++;
		}
	}
	else
		head1=NULL;
	return head1;
}
*/










int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(findIntersection(a, b));
    }
    return 0;
}

