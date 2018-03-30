#include <bits/stdc++.h>
using namespace std;
 
struct MinHeapNode{
	char data;
	unsigned freq;
	MinHeapNode *left, *right;
	MinHeapNode(char data, unsigned freq){
		left = right = NULL;
		this->data = data;
		this->freq = freq;
	}
};

struct compare{
	bool operator()(MinHeapNode* l, MinHeapNode* r){
		return (l->freq > r->freq);
	}
};
 
void printCodes(struct MinHeapNode* root, string str)
{
 
    if (!root)
        return;
 
    if (root->data != '$')
	    cout<< str << " ";
 
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

void del(struct MinHeapNode* root){
	if (!root)
        return;
    del(root->left);
    del(root->right);
    delete root;
}


void HuffmanCodes(char data[], int freq[], int size)
{
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
del(minHeap.top());
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int size=s.length();
		char arr[size];
		int freq[size];
		for(int i=0;i<size;i++){
			arr[i]=s[i];
			cin>>freq[i];
		}
		HuffmanCodes(arr, freq, size);
	}
	return 0;
}
