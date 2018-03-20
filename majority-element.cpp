#include <stddef.h>
#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;

	while(t--){
		set<int> s;
		multiset<int> ms;
		set<int>::iterator it;
		multiset<int>:: iterator mit;
		int n;
		int flag=0;
		cin>>n;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			s.insert(a);
			ms.insert(a);
		}
		for(it=s.begin();it!=s.end();it++){
			int cnt=ms.count(*it);
			if(cnt>n/2){
				flag=1;
				cout<<*it<<endl;
			}
		}
		if(flag==0)
			cout<<"NO Majority Element"<<endl;
	}
	return 0;
}
