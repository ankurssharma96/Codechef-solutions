#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<iterator>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		map<ll,ll> a;
		multimap<ll,ll> b;
		map<ll,ll>::reverse_iterator it1;
		multimap<ll,ll>::iterator it2;
		map<ll,ll>::iterator it3;
		for(ll i=0;i<n;i++){
			ll temp;
			cin>>temp;
			a.insert(make_pair(temp,i));
			b.insert(make_pair(temp,i));
		}
		ll k;
		cin>>k;
		for(ll i=0;i<k;i++){
			it1=a.rbegin();
			ll temp=it1->first;
			it3=a.find(it1->first);
			a.erase(it3);
			it2=b.find(temp);
			while(it2!=b.end()){
				cout<<it2->second<<" ";
				b.erase(it2);
				it2=b.find(temp);	
			}
		}
		cout<<endl;
	}   
	return 0;
}
