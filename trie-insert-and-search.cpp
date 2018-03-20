#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

struct Node {
  map<char, Node*> children;
  bool eow;
};

Node head;

void insert(string word) {
	map<char, Node*> *current_tree = &head.children;
	map<char, Node*>::iterator it;
	Node *temp=&head;

	for (int i=0; i<word.length(); ++i) {
	    char ch = word[i];
	
	    if ((it = current_tree->find(ch)) != current_tree->end()) {
			current_tree = &it->second->children;
			temp=it->second;
	    }
		
	    if (it == current_tree->end()) {
	
			Node* new_node = new Node();
			new_node->eow=false;
			(*current_tree)[ch] = new_node;
			
			current_tree = &new_node->children;
			temp=new_node;
	    }
	}
	temp->eow=true;
}

bool search(string word) {
	map<char, Node*> *current_tree = &head.children;
	map<char, Node*>::iterator it;
	bool val;

	for (int i=0; i<word.length(); ++i) {
		if ((it = current_tree->find(word[i])) == current_tree->end()) {
		  return false;
		}
		current_tree = &it->second->children;
	}
	val=it->second->eow;
	return val;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			insert(a[i]);
		}
	
		string q;
		cin>>q;
		cout<<search(q)<<endl;
	}
}

