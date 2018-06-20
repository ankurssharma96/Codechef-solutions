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
		set<int> mset;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mset.insert(a[i]);
		}
		int k;
		cin>>k;
		set<int>::iterator it=mset.begin();
		int i=0;
		while(i!=k-1){
			i++;
			it++;
		}
		cout<<*it<<endl;
	}
}
