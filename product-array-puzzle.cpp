#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		long long int prod=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			prod*=a[i];
		}
		
		for(int i=0;i<n;i++){
			cout<<prod/a[i]<<" ";
		}
		cout<<endl;
	}
}
