#include<iostream>
using namespace std;
long long int count=0;
void merge(long long int arr[],long long int l,long long int m,long long int r){
	long long int n1=m-l+1;
	long long int n2=r-m;
	long long int arr1[n1];
	long long int arr2[n2];
	for(long long int i=0;i<n1;i++){
		arr1[i]=arr[l+i];
	}
	for(long long int i=0;i<n2;i++){
		arr2[i]=arr[m+1+i];
	}
	long long int i,j,k=l;
	i=j=0;
	while(i<n1 && j<n2){
		if(arr1[i]<=arr2[j]){
			arr[k]=arr1[i];
			i++;
		}
		else{
			arr[k]=arr2[j];
			j++;
			count+=(n1-i);
		}
		k++;
	}
	while(i<n1){
		arr[k]=arr1[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=arr2[j];
		j++;
		k++;
	}
}

void mergeSort(long long int arr[],long long int l,int r){
	int m=l+(r-l)/2;
	if(l<r){
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

int main(){
	long long int t;
	cin>>t;
	while(t--){
		count=0;
		long long int n;
		cin>>n;
		long long int arr[n];
		for(long long int i=0;i<n;i++){
			cin>>arr[i];
		}
		mergeSort(arr,0,n - 1);
		cout<<count<<endl;
	} 
}
