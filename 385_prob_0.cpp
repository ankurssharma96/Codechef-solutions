#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	long long int l=s.length();
	long long int i=0,j=0;
	long long int temp=0,ctr;
	long long int a[l],b[l];
	a[0]=0;b[0]=0;
	for(i=1;i<l/2+1;i++){
		if(s[i]==s[0]){
			a[temp]=i;
			temp++;
		}
	}
	for(i=0;i<temp;i++){
		if(l%a[i]!=0){
			continue;
		}
		ctr=1;
		for(j=0;j<l;j++){
			if(s[j]!=s[j%a[i]]){
				ctr=0;
			}
		}
		if(ctr==1){
			cout<<a[i];
			return 0;
		}
	}
	cout<<l;
}
