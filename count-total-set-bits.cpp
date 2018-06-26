#include<iostream>
#include<stack>
#include<climits>
using namespace std;
/*
int fun(int n){
	int sum=0;
	while(n){
		if(n%2)
			sum++;
		n=n/2;
	}
	return sum;
}*/
int fun(int n){
	int temp=n;
	int ctr=0;
	while(temp){
		temp=temp/2;
		ctr++;
	}
	int sum=0;
	for(int i=1;i<=ctr;i++){
		int t1=1<<i;
		int t2=t1/2;
		int temp=((n+1)/t1);
		sum+=temp*t2;
		if( ( (n+1)%t1-t2 ) > 0)
			sum=sum+((n+1)%t1-t2)%t1;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum=0;
		/*for(int i=0;i<=n;i++){
			sum=sum+fun(i);
		}
		cout<<sum<<endl;*/
		cout<<fun(n)<<endl;
	}
}
