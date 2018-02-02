#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node* left=NULL;
    struct node* right=NULL;
}*head=NULL;

void inorder(struct node* nod){
    if(nod==NULL)
        return;
    inorder(nod->left);
    cout<<nod->data<<" ";
    inorder(nod->right);
}
void preorder(struct node* nod){
    if(nod==NULL)
        return;
    
    cout<<nod->data<<" ";
    preorder(nod->left);
    preorder(nod->right);
}
void postorder(struct node* nod){
    if(nod==NULL)
        return;
    postorder(nod->left);
    postorder(nod->right);
    cout<<nod->data<<" ";
}

struct node* newnode(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}

struct node* insert(struct node* node,int key){
    if(node==NULL){
        return newnode(key);
    }
    else if(key<=node->data){
        node->left=insert(node->left,key);
    }
    else 
        node->right=insert(node->right,key);
    
}

int main() {
    // your code goes here
    struct node* root=NULL;
    cout<<"Enter the root value: ";
    int n;
    cin>>n;
    root = insert(root, n);
    n=1;
    while(n){
        cout<<"\n\n\nEnter 1 for insertion: \n";
        cout<<"Enter 2 for preorder: \n";
        cout<<"Enter 3 for inorder: \n";
        cout<<"Enter 4 for postorder: \n";
        cout<<"Enter 5 for exit: ";
        int val;
        cin>>val;
        switch(val){
            case 1:{
                cout<<"\nEnter the value to be inserted: ";
                int key;
                cin>>key;
                insert(root,key);
                break;
            }
            case 2:{
                cout<<"\n";
                preorder(root);
                break;
            }
            case 3:{
                cout<<"\n";
                inorder(root);
                break;
            } 
            case 4:{
                cout<<"\n";
                postorder(root);
                break;
            } 
            case 5:{
                n=0;
                break;
            }
        }
    }
    return 0;
}
