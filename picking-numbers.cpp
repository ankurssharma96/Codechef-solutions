#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,int> arr;
	map<int,int>::iterator it;
	map<int,int>::iterator itf;
	int temp=n;
	while(temp--){
		int val;
		cin>>val;
		it=arr.find(val);
		if(it!=arr.end())
				it->second+=1;
		else
			arr.insert(make_pair(val,1));
	}
	
	
	it=arr.begin();
	int max=it->second;
	it++;
	itf=it;
	for(it=arr.begin() ; itf!=arr.end() ; itf++,it++){
		if((itf->first-it->first==1) && (it->second + itf->second)>max)
				max=(it->second + itf->second);
		else if(it->second>max)
			max=it->second;
	}
		
	if(it->second>max)
		max=it->second;
	
	cout<<max;
}

