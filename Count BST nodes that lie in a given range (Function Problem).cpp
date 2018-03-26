/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
The structure of a BST node is as follows:
struct Node {
int data;
Node * right, * left;
};
*/
int getCountOfNode(Node *root, int l, int h)
{
  // your code goes here   
    if(root==NULL){
        return 0;
    }
    if(root->data<=h && root->data>=l){
        return getCountOfNode(root->left,l,h) + 1 + getCountOfNode(root->right,l,h);
    }
    else{
        return getCountOfNode(root->left,l,h) + getCountOfNode(root->right,l,h);
    }
    
    
}
