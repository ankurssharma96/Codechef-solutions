/*#include<iostream>
#include<algorithm>
using namespace std;

int fun(int *a,int n, int i){
	int sum=0;
	if(i<n){
		sum=max((a[i]+fun(a,n,i+2)),fun(a,n,i+1));
	}
	return sum;
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
		cout<<fun(&a[0],n,0)<<endl;
	}
}*/


#include<stdio.h>
#include<iostream>
using namespace std;
int FindMaxSum(int arr[], int n)
{
	int incl = arr[0];
	int excl = 0;
	int excl_new;
	int i;
	
	for (i = 1; i < n; i++)
	{
		excl_new = (incl > excl)? incl: excl;
		incl = excl + arr[i];
		excl = excl_new;
	}
	return ((incl > excl)? incl : excl);
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
		cout<<FindMaxSum(a,n)<<endl;
	}
}
