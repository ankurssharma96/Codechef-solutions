#include<iostream>
using namespace std;

int fun(int a[],int l,int r){
	while(l<r){
		int m=(l+r)/2;
		if(l==m)
			return r;
		if(r==m)
			return l;
		if(a[m]>a[m+1] && a[m]>a[m-1])
			return m;
		if(a[m+1]>a[m] && a[m]>a[m-1])
			l=m;
		if(a[m+1]<a[m] && a[m]<a[m-1])
			r=m;
	}
}
int binarySearch_asc(int arr[], int low, int high, int key)
{
	if (high < low)
		return -1;
	
	int mid = (low + high)/2;
	if (key == arr[mid])
		return mid;
	
	if (key > arr[mid])
		return binarySearch_asc(arr, (mid + 1), high, key);
	
	return binarySearch_asc(arr, low, (mid -1), key);
}
int binarySearch_desc(int arr[], int low, int high, int key)
{
	if (high < low)
		return -1;
	
	int mid = (low + high)/2;
	if (key == arr[mid])
		return mid;
	
	if (key < arr[mid])
		return binarySearch_desc(arr, (mid + 1), high, key);
	
	return binarySearch_desc(arr, low, (mid -1), key);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int l=0,r=n-1;
		int pivot=fun(a,l,r);
		int pos=binarySearch_asc(a,0,pivot,x);
		if(pos==-1)
			pos=binarySearch_desc(a,pivot+1,n-1,x);
		if(pos==-1)
			cout<<"OOPS! NOT FOUND"<<endl;
		else 
			cout<<pos<<endl;
	}
}
