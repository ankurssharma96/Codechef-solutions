#include<iostream>
using namespace std;
int fun1(int n,int d){
	int temp=0;
	int ctr=0;
	for(int i=0;i<d;i++){
		temp=temp|(1<<i);
		ctr++;
	}
	temp=temp<<(16-ctr);
	temp=temp & n;
	temp=temp>>(16-ctr);
	n=n<<d;
	n=n|temp;
	return n;
}
int fun2(int n,int d){
	int temp=0;
	int ctr=0;
	for(int i=0;i<d;i++){
		temp=temp|(1<<i);
		ctr++;
	}
	//temp=temp<<(16-ctr);
	temp=temp & n;
	temp=temp<<(16-ctr);
	n=n>>d;
	n=n|temp;
	return n;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		d=d%16;
		cout<<fun1(n,d)<<endl;
		cout<<fun2(n,d)<<endl;
	}
}
