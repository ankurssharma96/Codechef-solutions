#include<iostream>
#include<map>
#include<algorithm>
#include<list>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,w,v,p,k,s;
		list<long long int> *adj;
		cin>>n;
		adj = new list<long long int>[n+1];
		map<long long int,long long int> mymap;
		for(long long int i=1;i<=n;i++){
			cin>>p;
			mymap.insert(pair<long long int,long long int>(p,i));
		}
		for(long long int i=0;i<n-1;i++){
			cin>>w>>v;
			adj[v].push_back(w);
			adj[w].push_back(v);
		}
		map<long long int,long long int>::reverse_iterator bt;
		list<long long int>::iterator i;
		for(k=1;k<=n;k++){
			for(bt=mymap.rbegin();bt!=mymap.rend();bt++){
				if(bt->second==k)
					goto lab;
				i=find(adj[k].begin(), adj[k].end(),bt->second);
				if(i==adj[k].end()){
					cout<<bt->second<<" ";
					goto label;
				}
				lab:
					s=2;
			}
			label:
				s=1;
		}
	}
}
