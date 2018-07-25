#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		int l_sum=0;
		int flag=0;
		for(int i=0;i<n;i++){
			if(sum-a[i]==2*l_sum){
				cout<<i+1;
				flag=1;
				break;
			}
			l_sum+=a[i];
		}
		if(!flag)
			cout<<"-1";
		cout<<endl;
	}
}
