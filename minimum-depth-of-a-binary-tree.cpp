#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};




/*You are required to complete this method*/
int minDepth(Node *node)
{
	int min_depth=0;
	struct Node* temp=node;
	stack<struct Node*> st;
	st.push(temp);
	while(!st.empty()){
		struct Node* nd=st.top();
		st.pop();
		if(nd==NULL){
			return min_depth;
		}
		else{
			min_depth+=1;
			st.push(nd->left);
			st.push(nd->right);
		}
	}
	return 0;
}



struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
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
           if (root == NULL)
             root = parent;
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
    cout<<minDepth(root)<<endl;
    // cout << endl;
  }
  return 0;
}

 
