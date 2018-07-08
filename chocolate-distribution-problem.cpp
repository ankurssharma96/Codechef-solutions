#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
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
		sort(a,a+n);
		int m;
		cin>>m;
		int min=INT_MAX;
		for(int i=0;(i+m-1)<n;i++){
			if(a[i+m-1]-a[i]<min)
				min=a[i+m-1]-a[i];
		}
		cout<<min<<endl;
	}
}
