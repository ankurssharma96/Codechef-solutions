#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int result=0;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			result=result^temp;
		}
		cout<<result<<endl;
	}
}
