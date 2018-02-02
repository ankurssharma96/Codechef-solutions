#include<iostream>
#include<map>
#include<utility>
#include<list>
#include<algorithm>
using namespace std;
bool fun(pair<long long int,long long int> *paa , pair<long long int,long long int> *pa , pair<long long int,long long int> *pa1 , long long int i, long long int e, long long int k , pair<long long int,long long int> *res){	
	if(paa[i-1].second==pa[i].first){
		if(i==e-1 && pa[i].second!=k)
			return false;
		else if(i==e-1){
			res[i]=make_pair(pa[i].first,pa[i].second);
			return true;
		}	
		if(i<e-1){
			fun(pa,pa,pa1,i+1,e,k,res);
			res[i]=make_pair(pa[i].first,pa[i].second);
		}	
	}
	else if(paa[i-1].second==pa1[i].first){
		if(i==e-1 && pa1[i].second!=k)
			return false;
		else if(i==e-1){
			res[i]=make_pair(pa1[i].first,pa1[i].second);
			return true;
		}
		if(i<e-1){
			fun(pa1,pa,pa1,i+1,e,k,res);
			res[i]=make_pair(pa1[i].first,pa1[i].second);
		}	
	}
	else 
		return false;
}
 
int main(){
		long long int n,e,w,v,i;
		cin>>n>>e;
		pair<long long int,long long int> *pa;
		pair<long long int,long long int> *pa1;
		pair<long long int,long long int> *res;
		pa=new pair<long long int,long long int>[e];
		pa1=new pair<long long int,long long int>[e];	
		res=new pair<long long int,long long int>[e];	
		for(long long int i=0;i<e;i++){
			cin>>w>>v;
			pa[i]=make_pair(w,v);
			pa1[i]=make_pair(v,w);
		}
		i=1;
		bool bee=false;
		bool boo=fun(pa,pa,pa1,i,e,pa[0].first,res);
		if(!boo){
			bee=fun(pa1,pa,pa1,i,e,pa1[0].first,res);	
		}
		
		if(boo || bee){
			if(boo){
				res[0]=pa[0];
			}
			else
				res[0]=pa1[0];
			cout<<"YES"<<endl;
			for(long long int i=0;i<e;i++){
			cout<<res[i].first<<" "<<res[i].second<<endl;
			}
			
		}
		else 
			cout<<"NO";
	}
 
