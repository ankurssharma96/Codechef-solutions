
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
/*
void fun(Node *node,int hor,set<int> &mset,set<int> &q){
	if(node==NULL){
		return;
	}

	if(mset.find(hor)==mset.end()){
		mset.insert(hor);
		q.insert(node->data);
	}
	
	fun(node->left,hor-1,mset,q);
	fun(node->right,hor+1,mset,q);
}

// Method that prints the bottom view.
void topView(Node *root)
{
	int hor=0;
	set<int> mset;
	set<int> q;
	fun(root,hor,mset,q);
	set<int>::iterator it;
	for(it=q.begin();it!=q.end();it++){
		cout<<*it<<" ";
	}
}*/
void topView(struct Node *root)
{
    map<int,int> m;
    queue<pair<struct Node*,int> > q;
    q.push(make_pair(root,0));
    
    while(!q.empty())
    {
        pair<struct Node*,int> current=q.front();
        int hor=current.second;
        struct Node* nod=current.first;
        q.pop();
        
        if(m.find(hor)==m.end())
        {
            cout<<nod->data<<" ";
            m[hor]=nod->data;
        }
        if(nod->left)
        	q.push(make_pair(nod->left,hor-1));
        if(nod->right)
        	q.push(make_pair(nod->right,hor+1));
    }
}


struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)malloc(sizeof(struct Node));
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
     topView(root);
     cout << endl;
  }
  return 0;
}


