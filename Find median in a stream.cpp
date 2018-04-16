#include<iostream>
#include<set>
#include<cmath>
#define ll long long int
using namespace std;
int main(){
	ll n;
	cin>>n;
	set<ll> a;
	set<ll>::iterator it;
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		a.insert(x);
		if(i%2==0){
			ll count=0;
			it=a.begin();
			ll temp=i/2;
			while(count<temp){
				it++;
				count++;
			}
			cout<<*it<<endl;
		}
		else{
			ll count=0;
			it=a.begin();
			ll temp=i/2;
			while(count<temp){
				it++;
				count++;
			}
			ll sum=*it;
			it++;
			sum +=*it;
			cout<<floor(sum/2)<<endl;
		}
	}
}
