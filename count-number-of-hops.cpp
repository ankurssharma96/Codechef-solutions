#include<iostream>
using namespace std;


int fun(int n){
	int a[n+1];
	a[0]=1;
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=n;i++){
		a[i]=a[i-3]+a[i-2]+a[i-1];
	}
	return a[n];
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
