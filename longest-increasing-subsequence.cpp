#include<iostream>
#include<limits.h>
using namespace std;

int fun(int arr[],int n){
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=1;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j])
				a[i]=max(a[i],1+a[j]);
		}
	}
	int max=0;
	for(int i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
	return max;
}

/*
int fun(int prev,int i,int arr[],int n){
	if(i==n)
		return 0;
	if(arr[i]>=prev)
		return max( 1+fun(arr[i],i+1,arr,n) , fun(prev,i+1,arr,n));
	else
		return fun(prev,i+1,arr,n);
}
*/

int main(){	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		//int a[n];
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		//	a[i]=-1;
		}
		cout<<fun(arr,n)<<endl;
		//fun(-10,0,arr,n,a);
	}
}
