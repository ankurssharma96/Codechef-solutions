#include<iostream>
#include<set>
#include<map>
#include<limits.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> a;
		map<char,int>::iterator it;
		for(int i=0;i<s.length();i++){
			it=a.find(s[i]);
			if(it==a.end()){
				a.insert(make_pair(s[i],1));
			}
			else{
				it->second=it->second+1;
			}
		}
		it=a.begin();
		int max=INT_MIN;
		while(it!=a.end()){
			if(it->second > max)
				max=it->second;
			it++;
		}
		if(s.length()>=(2*max)-1)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}
