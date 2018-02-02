#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long int i,ctr=0;;
		for(i=0;s[i]!='\0';i++){
			if(s[i]=='<'){
				s[i]='>';
			}
			else if(s[i]=='>'){
				s[i]='<';
			}
		}
		for(i=1;s[i]!='\0';i++){
			if(s[i-1]=='>' && s[i]=='<'){
				ctr++;
			}	
		}
		cout<<ctr<<endl;
	}
}
