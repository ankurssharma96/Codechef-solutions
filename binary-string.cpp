#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char a[n];
		int cnt=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]=='1')
				cnt++;
		}
		cout<<(cnt*(cnt-1))/2<<endl;
	}
}
