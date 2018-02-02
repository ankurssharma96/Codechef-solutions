#include<iostream>
#include<map>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,i,j;
		cin>>n;
		long long int sum=0;
		map<map<long long int,long long int>,long long int>mp;
		long long int u[n-1],v[n-1],c[n-1];
		for(i=0;i<n-1;i++){
			cin>>u[i]>>v[i]>>c[i];
			mp.insert((make_pair(make_pair(u[i],v[i])),c[i]));
			mp.insert((make_pair(make_pair(v[i],u[i])),c[i]));
		}
		for(i=0;i<n-1;i++){
			for(j=i;j<n-1;j++){
				sum=sum
			}
		}
	}
}
