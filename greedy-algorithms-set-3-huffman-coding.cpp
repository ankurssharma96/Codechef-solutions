#include<iostream>
#include<queue>
using namespace std;
/*
struct heap_node{
	char data;
	int freq;
	heap_node *left;
	heap_node *right;
	heap_node(char d,int fr){
		left=right=NULL;
		data=d;
		freq=fr;
	}
};

struct compare {
	bool operator()(heap_node* l, heap_node* r){
		return (l->freq > r->freq);
	}
};
/*
void printCode(struct heap_node* root, string str)
{
 
    if (!root)
        return;
 
    if (root->data != '$')
        cout << root->data << ": " << str << "\n";
 
    printCode(root->left, str + "0");
    printCode(root->right, str + "1");
}

void printCode(heap_node *root,string s){
	if(root==NULL)
		return;
	if(root->left==NULL && root->right==NULL){
		cout<<s<<" ";
		return;
	}
	else if(root->left!=NULL){
		s+="0";
		printCode(root->left,s);
	}
	else if(root->right!=NULL){
		s+="1";
		printCode(root->right,s);
	}
}



void build_heap(string s,int *fre){
	priority_queue< heap_node*,vector<heap_node*>,compare > minHeap;
	int n=s.length();
	for(int i=0;i<n;i++){
		minHeap.push(new heap_node(s[i],fre[i]));
	}
	while(minHeap.size()!=1){
		heap_node *l=minHeap.top();
		minHeap.pop();
		heap_node *r=minHeap.top();
		minHeap.pop();
		heap_node *top=new heap_node('$',(l->freq + r->freq));
		top->left=l;
		top->right=r;
		minHeap.push(top);
	}
	printCode(minHeap.top(),"");
}
*/

struct MinHeapNode {
    char data;
    unsigned freq;
    MinHeapNode *left, *right;
    MinHeapNode(char data, unsigned freq){
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};
struct compare {
    bool operator()(MinHeapNode* l, MinHeapNode* r){
        return (l->freq > r->freq);
    }
};
void printCodes(struct MinHeapNode* root, string str){
    if (!root)
        return;
    if (root->data != '$')
        cout << str << " ";
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

void HuffmanCodes(string data, int freq[]){
	int size=data.length();
    struct MinHeapNode *left, *right, *top;
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;
 
    for (int i = 0; i < size; ++i)
        minHeap.push(new MinHeapNode(data[i], freq[i]));
    while (minHeap.size() != 1) {
        left = minHeap.top();
        minHeap.pop();
 
        right = minHeap.top();
        minHeap.pop();
 
        top = new MinHeapNode('$', left->freq + right->freq);
 
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }
    printCodes(minHeap.top(), "");
    cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int freq[n];
		for(int i=0;i<n;i++){
			cin>>freq[i];
		}
		HuffmanCodes(s,freq);
	}
}
