#include<iostream>
#include<map>
#include<utility>
#include<list>
#include<algorithm>
using namespace std;
bool fun(pair<long long int,long long int> *paa , pair<long long int,long long int> *pa , pair<long long int,long long int> *pa1 , long long int i, long long int e, long long int k){
	if(paa[0].second==pa[0].first){
		if(i<e)
			fun(pa,pa+1,pa1+1,i+1,e,k);
		if(pa[0].second==k)
			return true;
	}
	else if(paa[0].second==pa1[0].first){
		if(i<e)
			fun(pa1,pa+1,pa1+1,i+1,e,k);
		if(pa1[0].second==k)
			return true;
	}
	else 
		return false;
}

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,e,w,v,i;
		cin>>n>>e;
		pair<long long int,long long int> *pa;
		pair<long long int,long long int> *pa1;
		pa=new pair<long long int,long long int>[e];
		pa1=new pair<long long int,long long int>[e];		
		for(long long int i=0;i<e;i++){
			cin>>w>>v;
			pa[i]=make_pair(w,v);
			pa1[i]=make_pair(v,w);
		}
		i=1;
		bool boo=fun(&pa[0],&pa[1],&pa1[1],i,e,pa[0].first);
		bool bee=fun(&pa1[0],&pa[1],&pa1[1],i,e,pa1[0].first);
		if(boo || bee){
			cout<<"true";
		}
	}
}
