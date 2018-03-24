#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		multimap<char,int> a;
		multimap<char,int>::iterator it;
		int n;
		cin>>n;
		char ch[n];
		cin>>ch;
		for(int i=0;i<n;i++){
			it=a.find(ch[i]);
			if(it==a.end()){
				a.insert(make_pair(ch[i],1));
			}
			else
				it->second=it->second+1;
		}
		int flag=0;
		for(int i=0;i<n;i++){
			it=a.find(ch[i]);
			if(it->second==1){
				cout<<ch[i]<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"-1"<<endl;
	}
}
