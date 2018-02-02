#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
stack<char> c;
bool fun(char* s,int n){
	for(int i=0;i<n;i++){
		if(s[i]=='(' || s[i]=='['){
			c.push(s[i]);
		}
		else if(c.empty()){
			return false;
		}
		else if(s[i]==']' && c.top()=='['){
			c.pop();
		}
		else if(s[i]==')' && c.top()=='('){
			c.pop();
		}
	}
	if(c.empty()){
		return true;
	}
	else 
		return false;
}
int main() {
	char s[50];
	cin>>s;
	if(fun(s,strlen(s))){
		cout<<"balanced";
	}
	else
		cout<<"unbalanced";
}
