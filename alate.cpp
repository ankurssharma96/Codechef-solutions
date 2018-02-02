#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll func(ll x, ll N, ll A[])
{
	//for(ll i=0;i<N;i++)
	//	cout<<A[i]<<" ";
	ll sum = 0 ;
	for(ll i=x-1;i<N;i+=x)
		sum += (A[i]*A[i])%1000000007  ;
	return sum ;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
			
		while(q--){
			ll ch;
			cin>>ch;
			switch(ch){
				case 1:{
					ll x;
					cin>>x;
					cout<<func(x,n,&a[0])<<endl;					
					break;
				}
				case 2:{
					ll x,y;
					cin>>x>>y;
					a[x-1]=y;
					break;
				}
			}			
		}
			
	}
}
