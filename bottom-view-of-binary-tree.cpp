// C++ Program to print Bottom View of Binary Tree
#include<bits/stdc++.h>
using namespace std;
// Tree node class
struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references
    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};
Node *newNode(int k)
{
    return new Node(k);
}




void fun(Node *node,int hor,int hei,map<int,int> &mmap,map<int,int> &mmap_nod){
	if(node==NULL){
		return;
	}
	map<int,int>::iterator it;
	if(mmap.find(hor)==mmap.end()){
		mmap.insert(make_pair(hor,hei));
		mmap_nod.insert(make_pair(hor,node->data));
	}
	else{
		it=mmap.find(hor);
		it->second=hei;
		it=mmap_nod.find(hor);
		it->second=node->data;
	}
	fun(node->left,hor-1,hei+1,mmap,mmap_nod);
	fun(node->right,hor+1,hei+1,mmap,mmap_nod);
}

// Method that prints the bottom view.
void bottomView(Node *root)
{
	int hor=0;
	int hei=0;
	map<int,int> mmap;
	map<int,int> mmap_nod;
	fun(root,hor,hei,mmap,mmap_nod);
	map<int,int>::iterator it;
	for(it=mmap_nod.begin();it!=mmap_nod.end();it++){
		cout<<it->second<<" ";
	}
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
     bottomView(root);
     cout << endl;
  }
  return 0;
}

