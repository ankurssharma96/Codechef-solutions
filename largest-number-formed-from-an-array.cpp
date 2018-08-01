#include<iostream>
#include<algorithm>
#include<math.h>
#include<sstream>
bool mycmp(int x,int y){//if xy > yx 
	int temp=y;
	int ctr=0;
	while(temp){
		temp/=10;
		ctr++;
	}
	int val1=x*(pow(10,ctr))+y;
	
	temp=x;
	ctr=0;
	while(temp){
		temp/=10;
		ctr++;
	}
	int val2=y*(pow(10,ctr))+x;
	
	return val1>val2;
}
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		stringstream ss;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,mycmp);
		string result;
		for(int i=0;i<n;i++){
			ss << a[i]; //append integers
		}
		result=ss.str();
		cout<<result<<endl;
	}
}
