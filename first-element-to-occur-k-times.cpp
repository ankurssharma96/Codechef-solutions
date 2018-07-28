#include<iostream>
#include<map>
#include<limits.h>
#include<unordered_map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		unordered_map<int,int> um;
		map<int,int> m;
		map<int,int>::iterator it;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(um.find(num)==um.end()){
				um[num]=i;
				m[num]++;
			}
			else{
				m[num]++;
			}
		}
		int mini=INT_MAX;
		int result=-1;
		for(it=m.begin();it!=m.end();it++){
			if(it->second == k && um[it->first]<mini){
				mini=um[it->first];
				result=it->first;
			}
		}
		cout<<result<<endl;
	}
}
