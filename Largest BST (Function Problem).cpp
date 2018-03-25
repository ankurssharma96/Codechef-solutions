/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Tree node structure  used in the program
 struct Node
 {
     int data;
     struct Node* left, *right;
};*/
/*You are required to complete this method */
 
int isBSTUtil(Node* node, int min, int max) 
{ 
  if (node==NULL) 
     return 1;

  if (node->data < min || node->data > max) 
     return 0; 
 
  return
    isBSTUtil(node->left, min, node->data-1) && isBSTUtil(node->right, node->data+1, max);
} 


int isBST(Node* node) 
{ 
  return(isBSTUtil(node, INT_MIN, INT_MAX)); 
} 

int size(Node* node) 
{  
  if (node==NULL) 
    return 0;
  else    
    return(size(node->left) + 1 + size(node->right));  
}

int largestBst(Node *root)
{
	//Your code here
	if(root==NULL)
	    return 0;
	if(isBST(root)){
	    return size(root);
	}/*
	else if(root->right){
	    if(isBST(root->right))
	        return size(root->right);
	}
	else if(root->left){
	    if(isBST(root->left))
	        return size(root->left);
	}*/
	else{
	    return max(largestBst(root->left),largestBst(root->right));
	}
}
