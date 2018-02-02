#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
	long long int t,i=0,j=0,l,l2;
	cin>>t;
	char s[100000];
	while(t--){
		cin>>s;
		l=strlen(s);
		if(l%2==1){
			l2=(l+1)/2;
		}
		if(l%2==1 && s[l/2]=='.'){
				s[l/2]='a';
			}
		int flag=0;
		for(i=0;i<l/2;i++){
			if(s[i]=='.' && s[l-i-1]=='.'){
				s[i]=s[l-i-1]='a';
			}
			
			else if(s[i]=='.'){
				s[i]=s[l-i-1];
			}
			else if(s[l-i-1]=='.'){
				s[l-i-1]=s[i];
			}
			
		}
		for(i=0;i<l/2;i++){
			if(s[i]!=s[l-i-1])
			{
				flag=1;
			}
		}
		if(flag==1){
			cout<<"-1"<<endl;			
		}
		else{
			cout<<s<<endl;
		}
	}
}

