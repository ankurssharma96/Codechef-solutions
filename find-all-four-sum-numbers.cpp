#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n,k;
		cin>>n>>k;
		
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		multimap<int, pair<int,int> > m;
		multimap<int, pair<int,int> >::iterator itp;
		set< vector<int> > mp;
		set< vector<int> >::iterator it1;
		vector<int> v;

		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				m.insert(make_pair((a[i]+a[j]),make_pair(i,j)));
			}
		}
		
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int sum=a[i]+a[j];
				int rem=k-sum;
				if(m.find(rem)!=m.end()){
					pair<multimap<int, pair<int,int> >::iterator, multimap<int, pair<int,int> >::iterator> ret;
					ret = m.equal_range(rem);
					for(itp=ret.first;itp!=ret.second;itp++){
						pair<int,int> p=itp->second;
						if(p.first!=i && p.first!=j && p.second!=i && p.second!=j){
							v.push_back(a[i]);v.push_back(a[j]);v.push_back(a[p.first]);v.push_back(a[p.second]);
							sort(v.begin(),v.begin()+4);				
							if(mp.find(v)==mp.end()){
								mp.insert(v);
							}
							v.clear();
						}
					}	
				}
			}
		}
		for(it1=mp.begin();it1!=mp.end();it1++){
			vector<int> v=*it1;
			for(int i=0;i<4;i++){
				cout<<v[i]<<" ";
			}
			cout<<"$";
		}
		if(mp.empty()){
			cout<<"-1";
		}
		cout<<endl;
	}
}
