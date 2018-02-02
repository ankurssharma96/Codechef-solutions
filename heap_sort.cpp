#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
	int largest=i;
	int l=(2*i)+1;
	int r=l+1;
	if(l<n && arr[l]>arr[largest]){
		largest=l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest=r;
	}
	if(largest!=i){
		int temp=arr[largest];
		arr[largest]=arr[i];
		arr[i]=temp;
		heapify(arr,n,largest);
	}
}

void heapsort(int arr[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}
	for(int i=n-1;i>=0;i--){
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		heapify(arr,i,0);
	}
}

int main(){
	int arr[]={5,9,45,12,4,89,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	heapsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
