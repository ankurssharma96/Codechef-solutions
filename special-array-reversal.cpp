#include<iostream>
#include<stack>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> st;
		for(int i=0;i<s.length();i++){
			if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
				st.push(s[i]);
			}
		}
		for(int i=0;i<s.length();i++){
			if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
				s[i]=st.top();
				st.pop();
			}
		}
		cout<<s<<endl;
	}
}
