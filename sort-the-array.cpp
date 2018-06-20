#include<iostream>
using namespace std;

void bubbleSort(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++){
			if(a[j-1]>a[j]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
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
		bubbleSort(a,n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
}
