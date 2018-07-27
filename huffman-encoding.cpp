#include<iostream>
#include<queue>
using namespace std;


struct heap_node{
	char data;
	int freq;
	heap_node* left;
	heap_node *right;
	heap_node *parent;
};

void swap(heap_node *x,heap_node *y){
	heap_node temp=*x;
	*x=*y;
	*y=temp;
}

void heapify(heap_node **heap,int i,int n){
	heap_node *l=heap[i]->left;
	heap_node *r=heap[i]->right;
	//heap_node *l=heap[2*i+1];
	int smallest=i;
	if(l!=NULL && l->freq<heap[smallest]->freq)
		smallest=2*i+1;
	if(r!=NULL && r->freq<heap[smallest]->freq)
		smallest=2*i+2;
	if(smallest!=i){
		swap(heap[smallest],heap[i]);
		heapify(heap,smallest,n);
	}
}

void buildHeap(heap_node *heap,int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(&heap,i,n);
	}
}
/*
int extractMin(heap_node **heap,int n){
	int mini=heap[0]->freq;
	heap[0]=heap[n-1];
	heapify(heap,0,n-1);
	return mini;
}*/

heap_node extractMin(heap_node *heap,int n){
	heap_node mini=heap[0];
	heap[0]=heap[n-1];
	heapify(&heap,0,n-1);
	return mini;
}


void insertKey(heap_node **heap,heap_node *l,heap_node *r,int fre,int heap_size,int capacity){
	if(heap_size==capacity){
		return;
	}
	int i=heap_size;
	heap_size++;
	heap[i]->freq=fre;
	while(i!=0 && heap[i]->parent->freq > heap[i]->freq){
		swap(heap[i]->parent,heap[i]);
		i=(i-1)/2;
	}
}

void printPreorder( heap_node* node){
    if (node->left == NULL && node->right==NULL){
    	cout<<" ";
    	return;
	}
    else if(node->left){
        cout<<"0";
	    printPreorder(node->left);	
	}
	else if(node->right){
	    cout<<"1";
	    printPreorder(node->right);	
	}
	
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int capacity=s.length();
		heap_node *heap=new heap_node[capacity];
		queue<struct heap_node> q;
		
		for(int i=0;i<capacity;i++){
			int fre;
			cin>>fre;
			heap[i].data=s[i];
			heap[i].freq=fre;
			
			if(2*i + 1 < capacity){
				heap[i].left=&heap[2*i+1];
			}
			else{
				heap[i].left=NULL;
			}
			
			if(2*i + 2 < capacity){
				heap[i].right=&heap[2*i+2];
			}
			else{
				heap[i].right=NULL;
			}
			
			if(i!=0){
				heap[i].parent=&heap[(i-1)/2];
			}
		}
		
		int heap_size=capacity;
		buildHeap(heap,heap_size);
		
		while(heap_size>1){
			heap_node l=extractMin(heap,heap_size);
			heap_size--;
			heap_node r=extractMin(heap,heap_size);
			heap_size--;
			
			heap_node *par=new heap_node;
			par->left=&l;
			par->right=&r;
			par->freq=l.freq+r.freq;
			par->parent=&heap[(heap_size-2)/2];
			
			int i=heap_size;
			heap_size++;
			heap[i]=*par;
			//heap[i]->freq=fre;
			while(i!=0 && heap[i].parent->freq > heap[i].freq){
				swap(heap[i].parent,&heap[i]);
				i=(i-1)/2;
			}
		}
		printPreorder(&heap[0]);
	}
}



