#include<iostream>
#include<set>
#include<limits.h>
#include<unordered_map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		set<int> m;
		set<int>::iterator it;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			m.insert(num);
		}
		it=m.begin();
		int val=*it;
		it++;
		int flag=0;
		for(;it!=m.end();it++){
			if(*it-val!=1){
				flag=1;
			}
			val=*it;
		}
		if(flag==1){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
}
