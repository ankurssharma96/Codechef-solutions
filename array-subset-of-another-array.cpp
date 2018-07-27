#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		unordered_set<int> a1;
		int flag=0;
		//unordered_set<int> a2;
		for(int i=0;i<m;i++){
			int num;
			cin>>num;
			a1.insert(num);
		}
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(a1.find(num)==a1.end()){
				flag=1;
				//break;
			}
		}
		if(flag==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}
