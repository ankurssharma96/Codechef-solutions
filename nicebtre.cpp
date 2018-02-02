#include<iostream>
#include<string>
using namespace std;

void replaceString(string& subject,const string& search,const string& replace){
	size_t pos=0;
	while((pos=subject.find(search,pos)) != string::npos){
		subject.replace(pos,search.length(),replace);
		pos+=replace.length();
	}
}


int main(){

	int t;
	cin>>t;
	while(t--){
		long int k=0;
		string str;
		cin>>str;
		while(str!="l"){
			replaceString(str,"nll","l");
			k++;
		}
		cout<<k<<endl;
	}
}
