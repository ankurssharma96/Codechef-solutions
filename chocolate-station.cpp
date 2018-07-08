#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int bot=0,bal=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int p;
		cin>>p;
		bot=a[0];
		for(int i=1;i<n;i++){
			if(a[i-1]-a[i]>0){
				bal+=a[i-1]-a[i];
			}
			else if(bal>(a[i]-a[i-1])){
				bal=bal-(a[i]-a[i-1]);
			}
			else{
				bot+=(a[i]-a[i-1])-bal;
				bal=0;
			}
		}
		cout<<bot*p<<endl;
	}
}
