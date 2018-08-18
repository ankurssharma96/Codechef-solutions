#include<iostream>
#include<set>
using namespace std;

int fun(string s[],int n){
	
	int rr=0,rb=0,br=0,bb=0;
	for(int i=0;i<n;i++){
		string temp=s[i];
		if(temp[0]=='R' && temp[temp.length()-1]=='R')
			rr++;
		if(temp[0]=='R' && temp[temp.length()-1]=='B')
			rb++;
		if(temp[0]=='B' && temp[temp.length()-1]=='R')
			br++;
		if(temp[0]=='B' && temp[temp.length()-1]=='B')
			bb++;
	}
	int m=min(rb,br);
	int c=0;
	if(rb==0&&br==0)
		c=max(rr,bb);
	else if(rb==br)
		c=rb+br+bb+rr;
	else 
		c=m+m+1+bb+rr;
	if(c==1)
		return 0;
	else
		return c*s[0].length();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		cout<<fun(s,n)<<endl;
	}
}
