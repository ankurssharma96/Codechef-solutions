#include<iostream>
using namespace std;
long long int is_present(string w,string s){
	for(long long int i=0;s[i]!='\0';i++){
		string k(1,s[i]);
		if(w.find(k)!=-1){
			return 1;
		}
	}
	return 0;
}
int main(){
	string s;
	cin>>s;
	long long int n;
	cin>>n;
	string w[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>w[i];
		
		if(is_present(w[i],s)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}	
	}
}
