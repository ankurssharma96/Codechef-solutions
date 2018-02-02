#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
	int height;
};

int hei(struct node* root){
	if(root==NULL){
		return 0;
	}
	else
		return root->height;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}
 

struct node* create_newnode(int data){
	struct node* newnode=(struct node*) malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->height=1;
	return newnode;
}

struct node* right_rotn(struct node* root){
	struct node* temp=root->left;
	struct node* temp1=temp->right;
	temp->right=root;
	root->left=temp1;
	root->height=max(root->left->height,root->right->height)+1;
	temp->height=max(temp->left->height,temp->right->height)+1;
	return temp;
}

struct node* left_rotn(struct node* root){
	struct node* temp=root->right;
	struct node* temp1=temp->left;
	temp->left=root;
	root->right=temp1;
	root->height=max(hei(root->left),hei(root->right))+1;
	temp->height=max(hei(temp->left),hei(temp->right))+1;
	return temp;
}

int balance(struct node* root){
	if(root==NULL)
		return 0;
	return hei(root->left) - hei(root->right);
	
}

struct node* insert(struct node* root, int data){
	if (root==NULL)
	{
		return create_newnode(data);
	}
	if(data<root->data){
		root->left=insert(root->left,data);
	}
	else if(data>root->data){
		root->right=insert(root->right,data);
	}
	else
		return root;
	
	root->height=max(hei(root->left),hei(root->right))+1;
			
	int bal=balance(root);
	
	if(bal>1){
		if(hei(root->left->left) >= hei(root->left->right)){		//left of left
			root=right_rotn(root);
			return root;
		}
		else{													//right of left
			root->left=left_rotn(root->left);
			root=right_rotn(root);
			return root;
		}
	}
	else if(bal<-1){
		if(hei(root->right->right) >= hei(root->right->left)){	//right of right
			root=left_rotn(root);
			return root;
		}
		else{													//Left of right
			root->right=right_rotn(root->right);
			root=left_rotn(root);
			return root;
		}
	}
	return root;
}

struct node* get_min(struct node* root){
	struct node* temp=root;
	while(temp->left!=NULL){
		temp=temp->left;
	}
	return temp;
}

struct node* delete_node(struct node* root, int data){
	if(root==NULL){
		return root;
	}
	if(data<root->data){
		root->left=delete_node(root->left,data);
	}
	else if(data>root->data){
		root->right=delete_node(root->right,data);
	}
	else{
		if(root->right==NULL || root->left==NULL){
			struct node* temp;
			if(root->right!=NULL){
				temp=root->right;
			}
			else
				temp=root->left;
				
			if(temp==NULL){
				temp=root;
				root=NULL;
				free(temp);
			}
			else{
				struct node* temp1=root;
				root=temp;
				free(temp1);
			}
		}
		else{
			struct node* temp=get_min(root->right);
			root->data=temp->data;
			free(temp);
		}
	}
	if(root==NULL){
		return root;
	}
	root->height=max(hei(root->left),hei(root->right))+1;
	int bal=balance(root);
	if(bal>1){
		if(hei(root->left->left) >= hei(root->left->right)){		//left of left
			root=right_rotn(root);
			return root;
		}
		else{													//right of left
			root->left=left_rotn(root->left);
			root=right_rotn(root);
			return root;
		}
	}
	else if(bal<-1){
		if(hei(root->right->right) >= hei(root->right->left)){	//right of right
			root=left_rotn(root);
			return root;
		}
		else{													//Left of right
			root->right=right_rotn(root->right);
			root=left_rotn(root);
			return root;
		}
	}
	return root;
}
void preorder(struct node* root){
	if(root == NULL){
		return ;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

int main(){
	struct node* root=NULL;
	root = insert(root, 9);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 0);
    root = insert(root, 6);
    root = insert(root, 11);
    root = insert(root, -1);
    root = insert(root, 1);
    root = insert(root, 2);
    preorder(root);
    cout<<endl;
	root = delete_node(root, 10);
    preorder(root);
}

