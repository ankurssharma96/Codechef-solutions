#include<iostream>
using namespace std;

int fun1(int num,int n,int m){
	int count=0;
	if(num>=n && num<=m)
		count++;
	
	if(num==0 || num>m)
		return count;
	
	int u_digit=num%10;
	int a=num*10+u_digit+1;
	int b=num*10+u_digit-1;
	
	if(u_digit==0){
		count+=fun1(a,n,m);
	}
	else if(u_digit==9){
		count+=fun1(b,n,m);
	}
	else{
		count+=fun1(a,n,m);
		count+=fun1(b,n,m);
	}
	/*
	if(a>=n && a<=m){
		count+=fun1(a,n,m);
	}
	if(b>=n && b<=m){
		count+=fun1(b,n,m);
	}*/
	return count;
}

int fun(int n,int m){
	int count=0;
	for(int i=0;i<=9;i++){
		count+=fun1(i,n,m);
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<fun(n,m)<<endl;
	}
}
