#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
	struct node* parent;
	char color;
}*root=NULL;


void right_rot(struct node* pt){
	struct node* l=pt->left;
	if(pt->parent!=NULL){
		if(pt==pt->parent->left)
			pt->parent->left=l;
		else
			pt->parent->right=l;
	}
	pt->left=l->right;
	l->right->parent=pt;
	l->right=pt;
	l->parent=pt->parent;
	pt->parent=l;
}


void left_rot(struct node* pt){
	struct node* r=pt->right;
	if(pt->parent!=NULL){
		if(pt==pt->parent->left)
			pt->parent->left=r;
		else
			pt->parent->right=r;
	}
		
	pt->right=r->left;
	r->left->parent=pt;
	r->left=pt;
	r->parent=pt->parent;
	pt->parent=r;
}

struct node* newnode(int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=temp->right=temp->parent=NULL;
	temp->color='r';
	return temp;
}

struct node* insert(struct node* root,struct node* temp){
	if(root==NULL){
		return temp;
	}
	else if(root->data<temp->data){
		root->right=insert(root->right,temp);
		root->right->parent=root;
	}
	else if(root->data>temp->data){
		root->left=insert(root->left,temp);
		root->left->parent=root;
	}
	return root;
	//cout<<temp->color;*/
}


void fix(struct node* pt,struct node* root){
	
	struct node* pt_par=pt->parent;

	if(pt_par==NULL){
		pt->color='b';
		return;
	}
	
	struct node* pt_gr=pt_par->parent;
	
	//cout<<pt_par->color<<pt->data;
	//cout<<pt->color;
	//cout<<pt->parent->data;
	//cout<<pt->parent->color;
	if(pt_par->color=='r'){
		//cout<<"working"<<pt->data<<endl;
		if(pt->parent==pt_gr->left){			//parent is left subtree of grandparent
			struct node* uncle=pt_gr->right;
			if(uncle->color=='r'){				// uncle RED
				pt_par->color=uncle->color='b';
				pt_gr->color='r';
				fix(pt_gr,root);
			}
			else{								// uncle BLACK
				if(pt==pt_par->left){			// left left
					pt_par->color='b';
					pt_gr->color='r';
					right_rot(pt_gr);
				}
				else{							//left right
					pt->color='b';
					pt_gr->color='r';
					left_rot(pt_par);
					right_rot(pt_gr);	
				}
			}
		}
		else{									//parent is right subtree of grandparent
			struct node* uncle=pt_gr->left;	
			
			if(uncle->color=='r'){				//uncle RED
				pt_par->color=uncle->color='b';
				pt_gr->color='r';
				fix(pt_gr,root);
			}
			
			else{								// uncle BLACK
				if(pt==pt_par->right){			// right right
					pt_par->color='b';
					pt_gr->color='r';
					left_rot(pt_gr);
				}
				else{							//right left
					pt->color='b';
					pt_gr->color='r';
					right_rot(pt_par);
					left_rot(pt_gr);	
				}
			}	
		}
	}
}

void inorder(struct node* root){
	if(root==NULL)
		return;
	else{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int main(){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
    temp=newnode(7);
	root=insert(root,temp);
	fix(temp,root);
    
	temp=newnode(6);
    root=insert(root,temp);
    fix(temp,root);
	
	temp=newnode(5);
    root=insert(root,temp);
	fix(temp,root);
	
	temp=newnode(4);
    root=insert(root,temp);
    fix(temp,root);
	
	temp=newnode(3);
    root=insert(root,temp);
    fix(temp,root);
	
	temp=newnode(2);
    root=insert(root,temp);
    fix(temp,root);
	
	temp=newnode(1);
	root=insert(root,temp);
    fix(temp,root);
    
	inorder(root);
	
}
