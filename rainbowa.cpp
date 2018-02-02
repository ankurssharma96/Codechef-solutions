#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int a[8];
		for(int i=0;i<8;i++)
			a[i]=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(arr[0]!=1 || arr[((n+1)/2)-1]!=7 || arr[n-1]!=1){
			cout<<"no"<<endl;
			goto tag;
		}
		for(int i=1;i<(n+1)/2;i++){
			a[arr[i]]++;
			if(arr[i]-arr[i-1]!=0 && arr[i]-arr[i-1]!=1){
				cout<<"no"<<endl;
				goto tag;
			}
		}

		for(int i=(n+1)/2;i<n-1;i++){
			a[arr[i]]--;
			if(arr[i]-arr[i+1]!=0 && arr[i]-arr[i+1]!=1){
				cout<<"no"<<endl;
				goto tag;
			}
		}	
		for(int i=1;i<7;i++){
			if(a[i])
			{
				cout<<"no"<<endl;
				goto tag;
			}
	}
		cout<<"yes"<<endl;
		tag:
		int i;
	}
}
