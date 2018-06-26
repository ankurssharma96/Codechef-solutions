#include<iostream>
using namespace std;
int fun(int a,int b){
	int t=a^b;
	int cnt=0;
	while(t){
		if(t&1)
			cnt++;
		t=t/2;
	}
	return cnt;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<fun(a,b)<<endl;
	}
}
