#include<bits/stdc++.h>
#define ll long long int
#include<map>
using namespace std;
map<ll,ll>mmap;
map<ll,ll>::iterator it;

ll fun(ll n){
	it=mmap.find(n);
	if(it!=mmap.end())
		return it->second;
	
	ll val1=n/2;
	ll val2=n/3;
	ll val3=n/4;
	if((val1+val2+val3)>n){
		ll temp=(fun(val1)+fun(val2)+fun(val3));
		mmap.insert(make_pair(n,temp));
		return temp;
	}
	else{
		mmap.insert(make_pair(n,n));
		return n;
	}
}


int main(){/*
	//int t;
	//cin>>t;
	//while(t--){
	while(1){
		ll n;
		cin>>n;
		cout<<fun(n)<<endl;
	}
		
	//}*/
	ll n;
	while (scanf("%lld", &n) == 1) {
		printf("%lld\n", fun(n));
	}
}
