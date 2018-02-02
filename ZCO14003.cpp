#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long int n,i;
	cin>>n;
	long long int a[n],b[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		b[i]=a[i]*(n-i);
	}
	sort(b,b+n);
	cout<<b[n-1];
}
