#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char a[n];
		int flag[26]={0};
		int count=0;
		map<int,char> m1;
		map<int,char>:: iterator it1;
		map<char,int> m2;
		map<char,int>:: iterator it2;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(flag[a[i]-97]==0){
				count++;
				m1.insert(make_pair(count,a[i]));
				m2.insert(make_pair(a[i],count));
				flag[a[i]-97]=1;
			}
			else{
				it2=m2.find(a[i]);
				if(it2!=m2.end())
					m1.erase(it2->second);
			}	
			it1=m1.begin();
			if(it1==m1.end())
				cout<<"-1"<<" ";
			else
				cout<<it1->second<<" ";
		}
		cout<<endl;
	}
}
