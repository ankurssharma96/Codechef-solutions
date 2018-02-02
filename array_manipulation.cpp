#include <iostream>
#include<map>
using namespace std;

int main(){
	int m,n,i,j;
	int a,b,k;
	cin>>n;
	cin>>m;
	map<int,int> mmap;
	map<int,int>::iterator it;
	for(i=1; i<=m;i++){
		cin>>a>>b>>k;
		it=mmap.find(a);
		if(it==mmap.end())
			mmap.insert(pair<int,int>(make_pair(a,k)));
		else
			it->second+=k;
			
			
	    it=mmap.find(b+1);
		if(it==mmap.end())
			mmap.insert(pair<int,int>(make_pair(b+1,-k)));
		else
			it->second-=k;
	}
	long long int temp=0,max=0;
	for(it=mmap.begin();it!=mmap.end();it++){
		temp+=it->second;
		if(temp>max)
		max=temp;
	}
	cout<<max;
	return 0;
}
