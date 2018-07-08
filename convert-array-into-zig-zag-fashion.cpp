#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void fun(int *a,int n){
	for(int i=1;i<n-1;i=i+2){
		if(a[i]<a[i-1])
			swap(a[i],a[i-1]);
		if(a[i]<a[i+1])
			swap(a[i],a[i+1]);
	}
	if(n%2==0){
		if(a[n-1]<a[n-2])
			swap(a[n-1],a[n-2]);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		fun(a,n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
