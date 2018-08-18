#include<iostream>
using namespace std;

int cube(int i){
	return i*i*i;
}

bool fun(int n){
	int sum=0;
	int temp=n;
	while(temp){
		sum=sum+cube(temp%10);
		temp=temp/10;
	}
	if(sum==n){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(fun(n)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}
