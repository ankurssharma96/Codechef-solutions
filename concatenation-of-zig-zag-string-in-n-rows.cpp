#include<iostream>
using namespace std;

string fun(string str,int n){
	if(n==1)
		return str;
	string s[n];
	int i=0;
	int dir=1;
	int ctr=0;
	while(i<str.length()){
		s[ctr]+=str[i];
		ctr+=dir;
		if(ctr==n && dir==1){
			dir=-1;
			ctr=n-2;
		}
		if(ctr==-1 && dir==-1){
			dir=1;
			ctr=1;
		}
		i++;
	}
	str="";
	for(int i=0;i<n;i++){
		str+=s[i];
	}
	return str;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int n;
		cin>>s;
		cin>>n;
		cout<<fun(s,n)<<endl;
	}
}
