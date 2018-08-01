#include<iostream>
#include<map>
using namespace std;
bool fun(string s1,string s2){
	int l1=s1.length();
	int l2=s2.length();
	if(l1!=l2)
		return false;
	map<char,int> m;
	map<char,int>::iterator it;
	map<char,int> m1;
	map<char,int>::iterator it1;
	
	for(int i=0;i<l1;i++){
		int val=s1[i]-s2[i];
		
		it=m.find(s1[i]);
		if(it==m.end()){
			m.insert(make_pair(s1[i],val));
		}
		else{
			if(it->second!=val)
				return false;
		}
		
		it1=m1.find(s2[i]);
		if(it1==m1.end()){
			m1.insert(make_pair(s2[i],val));
		}
		else{
			if(it1->second!=val)
				return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		if(fun(s1,s2))
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
}
