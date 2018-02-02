#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll func(ll x,ll arr[],ll n,ll c){
	ll last_pos=arr[0];
	ll cows_placed=1;
	
	for(ll i=1;i<n;i++){
		if(arr[i]-last_pos>=x){
			cows_placed++;
			last_pos=arr[i];
			if(cows_placed==c)
				return 1;
		}
	}
	
	return 0;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,c;
		cin>>n>>c;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		ll start=0;
		ll end=a[n-1]-a[0];
		ll mid;

		while(end-1>start){
			mid=(start+end)/2;
			if(func(mid,a,n,c)){
				start=mid;
			}
			else
				end=mid;
		}
		cout<<start<<endl;	
	}
}
