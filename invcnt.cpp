#include<iostream>
#include<map>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		ll count=0;
		cin>>n;
		ll a[n];
		map<ll,ll> mmap;
		map<ll,ll> mmap1;
		map<ll,ll>::iterator it;
		map<ll,ll>::iterator it1;
		map<ll,ll>::reverse_iterator rit;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			mmap.insert(make_pair(a[i],i+1));
			mmap1.insert(make_pair(i+1,1));
		}
		
		for(rit=mmap.rbegin();rit!=mmap.rend();rit++){
			it=mmap1.find(rit->second);
			it1=it;
			it1++;
			mmap1.erase(it);
			for(it=it1;it!=mmap1.end();it++){
				if(it->first>rit->second)
					count++;
			}
		}
		cout<<count<<endl;
	}
}
