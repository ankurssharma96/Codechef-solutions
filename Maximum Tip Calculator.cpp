#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int sum=0;
		int count1=0;
		int count2=0;
		int n,x,y;
		cin>>n>>x>>y;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		multimap<int,int> diff;
		multimap<int,int>::reverse_iterator rit;
		for(int i=0;i<n;i++){
			diff.insert(make_pair((a[i]-b[i]),i));
		}
		for(rit=diff.rbegin();rit!=diff.rend();rit++){
			int i=rit->second;
			if(a[i]>=b[i] && count1<=x){
				sum+=a[i];
			}
			else if(b[i]>=a[i] && count2<=y){
				sum+=b[i];
			}
			else if(count1<=x){
				sum+=a[i];
			}
			else if(count2<=y){
				sum+=b[i];
			}
		}
		cout<<sum<<endl;
	}
}
