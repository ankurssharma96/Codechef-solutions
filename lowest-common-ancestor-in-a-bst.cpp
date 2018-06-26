//Code by 1shubhamjoshi1
#include<bits/stdc++.h>
using namespace std;
struct Node {
int data;
struct Node * right, * left;
};
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }
}




Node* LCA(Node *root, int n1, int n2)
{
	if(root==NULL)
		return NULL;
	int val=root->data;
	/*if(val>=n1 && val<=n2)
		return root;*/
	if(val>n1 && val>n2){
		return LCA(root->left,n1,n2);
	}
	if(val<n1 && val<n2){
		return LCA(root->right,n1,n2);
	}
	return root;
}





int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);
        }
        int l,r;
        cin>>l>>r;
        cout<<LCA(root,l,r)->data<<endl;
    }
}
