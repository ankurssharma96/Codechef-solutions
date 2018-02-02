#include<iostream>
#include<algorithm>
#define ll long long
#include<math.h>
using namespace std;
ll fun(ll ch, ll x, ll y, ll *a, ll p){
	if(ch==1){
		a[x-1]=y;
		return 1;
	}
	else if(ch==2){
		ll pro=1;
		for(ll i=x-1;i<y;i++){
			pro=pro*a[i];
			pro=pro%p;
		}
		pro%=p;
		return pro;
	}
	
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,q,p,pro=1;
		cin>>n>>q>>p;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll ch[q],x[q],y[q];
		for(ll i=0;i<q;i++){
			
			cin>>ch[i]>>x[i]>>y[i];
			if(ch[i]==1){
				pro*=fun(ch[i],x[i],y[i],a,p);
				goto label;
			}
			else{
				pro=fun(ch[i],x[i],y[i],a,p);
				cout<<pro<<endl;
				ll lim = sqrt (pro) + 1;
					for (ll a = 0; a <= lim; a++)
		    			for (ll b = 0; b <= lim; b++)
		    			    for (ll c = 0; c <= lim; c++)
		            			for (ll d = 0; d <= lim; d++)
		                			if (((a*a) + (b*b) + (c*c) + (d*d))%p == pro){
		                				cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
		                					goto label;
									}
			}
			label:
				ll s=0;
    	}
	}
}
