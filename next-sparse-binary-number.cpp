#include<iostream>
using namespace std;
int funUtil(int n){
	if(n==0)
		return 1;
	int flag=1;
	int prev=n&1;
	n=n>>1;
	while(n){
		if(n&prev)
			return 0;
		prev=n&1;
		n=n>>1;
	}
	return 1;
}
int fun(int n){
	int flag=0;
	n=n-1;
	while(!flag){
		n++;
		flag=funUtil(n);	
	}
	return n;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fun(n)<<endl;
	}
}
