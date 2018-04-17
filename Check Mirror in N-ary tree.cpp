#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,e;
		cin>>n>>e;
		queue<int> qu[n+1];
		stack<int> st[n+1];
		for(int i=0;i<2;i++){
			for(int j=0;j<e;j++){
				int p,q;
				cin>>p>>q;
				qu[p].push(q);
				st[p].push(q);
			}
		}
		int flag=0;
		for(int i=1;i<=n;i++){
			while(!qu[i].empty() && !st[i].empty()){
				if(qu[i].front()!=st[i].top()){
					flag=1;
					goto tag;
				}
				qu[i].pop();
				st[i].pop();
			}
			if(!qu[i].empty() || !st[i].empty()){
				flag=1;
				goto tag;
			}
		}
		tag:
			if(flag==0){
				cout<<"1"<<endl;
			}
			else{
				cout<<"0"<<endl;
			}
	}
}
