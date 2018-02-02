#include<iostream>
#include<map>
#define ll long long int
using namespace std;
int main(){
	ll n,l,r;
	cin>>n>>l>>r;
	multimap<ll,int> mymap;
	for(ll i=0;i<n;i++){
		ll val;
		cin>>val;
		mymap.insert(pair<ll,int>(val,1));
	}
	multimap<ll,ll> range;
	multimap<ll,int>::iterator it=mymap.begin();
	multimap<ll,int>::iterator it1=mymap.begin();
	it++;
	for(it;it!=mymap.end();it++){
		range.insert(pair<ll,ll>((it->first)-(it1->first),(it->first)+(it1->first)));
		it1++;
	}
	int arr[r+1];
	for(ll i=l;i<r+1;i++){
		arr[i]=0;
	}
	multimap<ll,ll>::iterator it2=range.begin();
	for(it2=range.begin();it2!=range.end();it2++){
		ll lower,upper;
		lower=l;upper=r;
		if(it2->first >= lower){
			lower=it2->first;
			lower++;	
		}
		if(it2->second <= upper){
			upper=it2->second;
			upper--;
		}
		for(ll i=lower;i<=upper;i++){
			arr[i]=1;
		}
	}
	ll count=0;
	for(ll i=l;i<r+1;i++){
		if(arr[i]==1)
			count++;
	}	
	cout<<count<<endl;
} 
