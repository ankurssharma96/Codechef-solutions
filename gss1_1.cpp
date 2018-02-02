#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<limits.h>
#define ll long long int
using namespace std;

ll i=0; 
ll maxval=INT_MIN;

struct node
{
    ll key;
    struct node *left, *right;
};

struct node *newnode(ll item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

ll getMid(ll s, ll e) {  return s + (e -s)/2;  }

void construct_tree(ll ss,ll se,struct node* root){
	ll mid = getMid(ss, se);
	if(ss!=se){
		root->left=newnode(0);
		construct_tree(ss,mid,root->left);
		root->right=newnode(0);
		construct_tree(mid+1,se,root->right);
	}
}

void insert_values(ll arr[],struct node* root){
	if (root != NULL)
    {
        insert_values(arr,root->left);
        insert_values(arr,root->right);
        if(root->right==NULL && root->left==NULL){
			root->key=arr[i];
			i++;
		}
		else{
			root->key=root->left->key+root->right->key;
		}
    }
}

void max_inorder(struct node *root)
{
    if (root != NULL)
    {
        max_inorder(root->left);
        if(root->key>maxval)
        	maxval=root->key;
        max_inorder(root->right);
    }
}

ll getSumUtil(ll ss, ll se, ll qs, ll qe, ll si, struct node* root)
{
	if(root){
	    if (qs <= ss && qe >= se){
	    	max_inorder(root);
	    	return root->key;
		}
	    if (se < qs || ss > qe)
	        return INT_MIN;
	    ll mid = getMid(ss, se);/*
	    if(root->left){
	    	if(root->left->key>maxval)
	    		maxval=root->left->key;
		}
	    if(root->right){
	    	if(root->right->key>maxval)
	    		maxval=root->right->key;
		}*/
	    ll temp1=getSumUtil(ss, mid, qs, qe, 2*si+1,root->left);
	    //if(temp1>maxval)
	    //	maxval=temp1;
	    ll temp2=getSumUtil(mid+1, se, qs, qe, 2*si+2,root->right);
	    //if(temp2>maxval)
	    //	maxval=temp2;
	    ll sum=temp1+temp2;
	    if(sum>maxval)
	    	maxval=sum;
	    return sum;	
	}
}

int main()
{
    struct node *root = newnode(0);
    struct node* temp=root;
    
    ll n;
	cin>>n;
	ll arr[n];
	
	for(ll i=0;i<n;i++)
		cin>>arr[i];
		
 	construct_tree(0,n-1,temp);
    temp=root;
    insert_values(arr,temp);
    
    ll m;
    cin>>m;
    while(m--){
    	maxval=INT_MIN;
    	ll x,y;
    	cin>>x>>y;
    	getSumUtil(0, n-1, x-1, y-1, 0,temp);
    	cout<<maxval<<endl;
	}
    return 0;
}









/*
ll constructSTUtil(ll arr[], ll ss, ll se, ll *st, ll si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    ll mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
ll *constructST(ll arr[], ll n)
{
    ll x = (ll)(ceil(log2(n))); 
    ll max_size = 2*(ll)pow(2, x) - 1; 
    ll *st = new ll[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}

ll main()
{
    ll *st = constructST(arr, n);
    prllf("Sum of values in given range = %dn", 
            getSum(st, n, 1, 3));
    updateValue(arr, st, n, 1, 10);
    prllf("Updated sum of values in given range = %dn", getSum(st, n, 1, 3));
    return 0;
}


*/






/*
ll getSumUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return 0;
    ll mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}

ll getSum(ll *st, ll n, ll qs, ll qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        prllf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
/**/





/*
void updateValueUtil(ll *st, ll ss, ll se, ll i, ll diff, ll si)
{
    if (i < ss || i > se)
        return;
    st[si] = st[si] + diff;
    if (se != ss)
    {
        ll mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
void updateValue(ll arr[], ll *st, ll n, ll i, ll new_val)
{
    if (i < 0 || i > n-1)
    {
        prllf("Invalid Input");
        return;
    }
    ll diff = new_val - arr[i];
    arr[i] = new_val;
    updateValueUtil(st, 0, n-1, i, diff, 0);
}
*/
