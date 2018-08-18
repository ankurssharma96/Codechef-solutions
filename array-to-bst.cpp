#include<iostream>
using namespace std;

void fun(int arr[],int l,int r){
	if(l>r)
		return;
		
	int mid=(l+r)/2;
	cout<<arr[mid]<<" ";
	
	if(l==r){
		return;
	}
	
	fun(arr,l,mid-1);
	fun(arr,mid+1,r);
	return;
	
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
		int l=0;
		int r=n-1;
		fun(a,l,r);
		cout<<endl;
	}
}
