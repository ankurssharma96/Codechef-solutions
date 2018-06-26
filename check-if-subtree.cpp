#include <iostream>
#include <cstring>
#include<map>
using namespace std;
#define MAX 100
 
// Structure of a tree node
struct Node
{
    char key;
    struct Node *left, *right;
};
 
// A utility function to create a new BST node
Node *newNode(char item)
{
    Node *temp =  new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}







Node* find_node(Node* root,int val){
	if(root==NULL)
		return NULL;
	else if(root->key==val){
		return root;
	}
	Node* temp=NULL;
	if(temp==NULL)
		temp=find_node(root->left,val);
	if(temp==NULL)
		temp=find_node(root->right,val);
	return temp;
}

bool comp(Node* r1,Node* r2){
	if(r1==NULL && r2==NULL)
		return true;
	if(r1==NULL || r2==NULL)
		return false;
	if(r1->key==r2->key){
		return(comp(r1->left,r2->left) && comp(r1->right,r2->right));
	}
}


bool isSubtree(Node*  t1 ,Node * t2){
	int val=t2->key;
	Node* nod=find_node(t1,val);
	return comp(nod,t2);
}








 
// A utility function to store inorder traversal of tree rooted
// with root in an array arr[]. Note that i is passed as reference
void storeInorder(Node *root, char arr[], int &i)
{
    if (root == NULL)
    {
        arr[i++] = '$';
        return;
    }
    storeInorder(root->left, arr, i);
    arr[i++] = root->key;
    storeInorder(root->right, arr, i);
}
 
// A utility function to store preorder traversal of tree rooted
// with root in an array arr[]. Note that i is passed as reference
void storePreOrder(Node *root, char arr[], int &i)
{
    if (root == NULL)
    {
        arr[i++] = '$';
        return;
    }
    arr[i++] = root->key;
    storePreOrder(root->left, arr, i);
    storePreOrder(root->right, arr, i);
}
 
// Driver program to test above function
int main()
{
     int t;
 
  scanf("%d", &t);
  while(t--)
  { struct Node *child=NULL;
     map<int, Node*> m;
     int n;
     scanf(" %d",&n);
     struct Node *t2 = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (t2 == NULL)
             t2 = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     struct Node *child1;
     map<int, Node*> m1;
     int nodes;
     scanf("%d",&nodes);
     struct Node *t1 = NULL;
     while (nodes--)
     {
        Node *parent1;
        char lr1;
        int n3, n4;
        scanf("%d %d %c", &n3, &n4, &lr1);
        if (m1.find(n3) == m1.end())
        {
           parent1 = newNode(n3);
           m1[n3] = parent1;
           if (t1 == NULL)
             t1 = parent1;
        }
        else
           parent1 = m1[n3];
        child = newNode(n4);
        if (lr1 == 'L')
          parent1->left = child;
        else
          parent1->right = child;
        m1[n4]  = child;
     }
 
   cout<<isSubtree(t1,t2);
    cout<<" ";
  }
}


