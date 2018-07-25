#include<iostream>
using namespace std;

int fun(string s1,string s2){
	if(s1.length()!=s2.length())
		return 0;
	string temp=s1+s1;
	int found=temp.find(s2);
	if(found!=string::npos){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<fun(s1,s2)<<endl;
	}
}
