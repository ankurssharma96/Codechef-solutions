#include<iostream>
#include<math.h>
using namespace std;
bool fun(int n){
	int cnt=0,temp=n;
	while(temp){
		cnt++;
		temp/=10;
	}
	temp=n;
	int prev=temp%10;
	int curr;
	for(int i=1;i<cnt;i++){
		temp=temp/10;
		curr=temp%10;
		if(abs(curr-prev)!=1)
			return false;
		prev=curr;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int flag=0;
		for(int i=0;i<n;i++){
			if(a[i]<k && fun(a[i])){
				cout<<a[i]<<" ";
				flag=1;
			}
		}
		if(!flag)
			cout<<"-1";
		cout<<endl;
	}
}
