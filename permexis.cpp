#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long int t,i;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int ctr=0;
		sort(a,a+n);
		for(i=1;i<n;i++){
			if(a[i]-a[i-1]>1){
				ctr=1;
			}
		}
		if(ctr==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	
}
