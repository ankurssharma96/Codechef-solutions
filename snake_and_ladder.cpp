#include<iostream>
#include<map>
#include<utility>
#include<queue>
using namespace std;

int fun(int n,map<int,int> m){
	int die[]={1,2,3,4,5,6};
	pair<int,int> p=make_pair(1,0);
	queue< pair<int,int> > q;
	q.push(p);
	while(!q.empty()){
		p=q.front();
		if(p.first==30)
			return p.second;
		q.pop();
		for(int i=0;i<6;i++){
			int val=die[i];
			int nw=p.first;
			int count=p.second;
			nw=nw+val;
			map<int,int>::iterator it=m.find(nw);
			if(it!=m.end()){
				nw=it->second;
			}
			q.push(make_pair(nw,count+1));
		}
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			m.insert(make_pair(a,b));
		}
		cout<<fun(n,m)<<endl;
		
	}
}
