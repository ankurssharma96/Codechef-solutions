#include <bits/stdc++.h>
#define MAX_SIZE 100
using namespace std;
struct node
{
    int val;
    struct node *left, *right;
};
bool isPairPresent(struct node *root, int target);
struct node * NewNode(int val)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->val = val;
    tmp->right = tmp->left =NULL;
    return tmp;
}
struct node *insert(struct node *root,int a){
	if(root==NULL)
		return NewNode(a);
	if(root->val>a){
		root->left=insert(root->left,a);
	}
	if(root->val<a){
		root->right=insert(root->right,a);
	}
	return root;
}
void inorder(struct node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,target;
		cin>>n>>target;
		struct node *root =  NULL;
		while(n--){
			int a;
			cin>>a;
			if(root==NULL){
				root=NewNode(a);
			}
			else{
				insert(root,a);
			}
		}
		//inorder(root);
    cout<<isPairPresent(root, target)<<endl;
	}
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows
struct node
{
    int val;
    struct node *left, *right;
};
*/

bool find(struct node* root, int target, unordered_multimap<int,node*> s){
    if(root==NULL){
        return false;
    }
    
    pair< unordered_multimap<int,node*>::iterator,unordered_multimap<int,node*>::iterator > p;
    p=s.equal_range(target-root->val);
    for(unordered_multimap<int,node*>::iterator it=p.first;it!=p.second;it++){
        if(it->second!=root){
            return true;
        }
    }
    /*if(s.find(target-root->val)!=s.end()){
        return true;
    }*/
    if(find(root->left,target,s)){
        return true;
    }
    
    if(find(root->right,target,s)){
        return true;
    }
    
    return false;
}

void inOrder(struct node* root,unordered_multimap<int,node*> &s){
    if(root==NULL)
        return;
    inOrder(root->left,s);
    s.insert(make_pair(root->val,root));
    inOrder(root->right,s);
}

bool isPairPresent(struct node *root, int target){
    unordered_multimap<int,node*> s; s;
    inOrder(root,s);
    if(find(root,target,s)){
        return true;
    }
    else{
        return false;
    }
}
