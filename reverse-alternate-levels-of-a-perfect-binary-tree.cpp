#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
    struct Node* Node = (struct Node*)
                        malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return(Node);
}





void inOrder1(Node* root,stack<int> &st,int h){
	if(root==NULL)
		return;
	inOrder1(root->left,st,h+1);
	if(h%2){
		st.push(root->data);	
	}
	inOrder1(root->right,st,h+1);
}
void inOrder2(Node* root,stack<int> &st,int h){
	if(root==NULL)
		return;
	inOrder2(root->left,st,h+1);
	if(h%2){
		root->data=st.top();
		st.pop();	
	}
	inOrder2(root->right,st,h+1);
}

// The main function to reverse alternate Nodes of a binary tree
void reverseAlternate(Node *root){
	stack<int> st;
	int h=0;
	inOrder1(root,st,h);
	inOrder2(root,st,h);
}



// A utility function to print indorder traversal of a
// binary tree
void printInorder(struct Node *root)
{
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
/* Driver program to test above functions*/
int main()
{
   int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        Node *child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
   reverseAlternate(root);
   printInorder(root);
   cout<<endl;
  }
    return 0;
}


