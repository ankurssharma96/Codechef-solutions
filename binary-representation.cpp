#include<iostream>
#include<stack>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		stack<int> bin;
		int pos=0;
		while(n){
			bin.push(n%2);
			n=n/2;
			pos++;
		}
		while(pos<14){
			bin.push(0);
			pos++;
		}
		while(!bin.empty()){
			cout<<bin.top();
			bin.pop();
		}
		cout<<endl;
	}
}
