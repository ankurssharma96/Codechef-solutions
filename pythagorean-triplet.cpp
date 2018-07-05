#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i]*a[i];
			s.insert(a[i]*a[i]);
		}
		int flag=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(s.find(b[i]+b[j])!=s.end()){
					cout<<"Yes"<<endl;
					flag=1;
					goto tag;
				}
			}
		}
		tag:
		if(!flag)
			cout<<"No"<<endl;
	}
}
