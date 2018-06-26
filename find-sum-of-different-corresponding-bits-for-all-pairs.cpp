#include<iostream>
#define ll long long
using namespace std;
/*ll fun(ll x,ll y){
	ll xoy=x^y;
	ll cnt=0;
	while(xoy){
		if(1 & xoy)
			cnt++;
		xoy=xoy>>1;
	}
	return cnt;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll sum=0;
		for(ll i=0;i<n;i++){
			for(ll j=0;j<n;j++){
				sum=sum+fun(a[i],a[j]);
				sum=sum%1000000007;
			}
		}
		cout<<sum<<endl;
	}
}
*/
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll sum=0;
		for(int i=0;i<32;i++){
			ll cmp=1<<i;
			ll cnt=0;
			for(int j=0;j<n;j++){
				if(cmp & a[j])
					cnt++;
			}
			sum+=(cnt)*(n-cnt)*2;
			sum=sum%1000000007;
		}
		cout<<sum<<endl;
	}
}
