#include<iostream>
#include<map>
#define ll long long int
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,d,sum=0;
		ll temp1=0,temp2=0,count=0;
		map<ll,ll> mymap1;
		map<ll,ll> mymap2;
		map<ll,ll>::iterator it1,it2;
		cin>>n>>d;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
			sum += a[i];
		}
		if(sum%n){
			cout<<"-1"<<endl;
			goto tag;
		} 
		sum=sum/n;
		for(ll i=0;i<n;i++){
			if(a[i]>sum){
				mymap1.insert(make_pair(i,(a[i]-sum)));
				temp1+=a[i]-sum;
			}
			else if(a[i]<sum){
				mymap2.insert(make_pair(i,(sum-a[i])));
				temp2+=sum-a[i];
			}
		}
		it1=mymap1.begin();
		it2=mymap2.begin();
		while(t1!=mymap1.end()){
			while(it2!=mymap2.end()){
				if((it2.first>it1.first) && (it2.first-it1.first)%d==0){
					if(it2.second-it1.second>0){
						count+=it2.second-it1.second;
						
					}
				}
				else if((it1.first>it2.first) && (it1.first-it2.first)%d==0){
					
				}
				
				
				it2++;
			}
			it1++;
		}
		tag:
	}
}
