#include<iostream>
#include<limits.h>
#define ll long long
using namespace std;
ll phi(ll n){
	ll result=n;
	for(ll i=2;i*i<n;i++){
		if(n%i==0){
			while(n%i==0)
				n=n/i;
			result=result-result/i;
		}
	}
	if(n>1)
		result=result-result/n;
	return result;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		float max=INT_MIN;
		ll val;
		for(ll i=1;i<=n;i++){
			ll fi=phi(i);
			cout<<fi<<endl;
			if((long double)i/fi > max){
				max=(long double)i/fi;
				val=i;
			}
		}
		cout<<val<<endl;
	}
}
