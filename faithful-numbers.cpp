#include<iostream>
#define ll long long
using namespace std;
ll fun(ll n){
	ll pow=1;
	ll sum=0;
	while(n){
		if(n & 1){
			sum+=pow;
		}
		n=n>>1;
		pow=pow*7;
	}
	return sum;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<fun(n)<<endl;
	}
	
}

