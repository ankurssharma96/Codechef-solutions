#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include <string.h>
#include<map>
using namespace std;

void fun(float a[],float x,int n,int r,int c){
	int i=(r-1)*r/2;
	i+=c-1;
	if(i>=n)
		return;
	a[i]=a[i]+x;
	if(a[i]>1.0){
		x=a[i]-1.0;
		a[i]=1.0;
		fun(a,x/2,n,r+1,c);
		fun(a,x/2,n,r+1,c+1);
	}
	return;
}

int main(){
	cout<<fixed;
	cout<<setprecision(6);
	int t;
	cin>>t;
	while(t--){
		int i,j,k;
		cin>>k;
		cin>>i;
		cin>>j;
		int n=i*(i+1)/2;
		float a[n];
		memset(a,0,sizeof(a));
		fun(a,k,n,1,1);
		int index=(i-1)*i/2;
		index-=1;
		index+=j;
		cout<<a[index]<<endl;
	}
}

