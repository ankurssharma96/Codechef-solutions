#include<iostream>
#include<algorithm>
using namespace std;

int a[10][50];

int fun(int n,int k){
	if(k==0 && n>0){
		return 0;
	}

	if(n==1){
		a[n-1][k-1]=k;
		return a[n-1][k-1];
	}
	
	if(a[n-1][k-1]!=0){
		return a[n-1][k-1];	
	}
	
	if(k==1 && n>=1){
		a[n-1][k-1]=1;
		return a[n-1][k-1];
	}

	else{		
		int mini=10000;
		for(int i=1;i<=k;i++){
			int val1=fun(n-1,i-1);
			int val2=fun(n,k-i);
			int temp=max(val1,val2);
			if(temp<mini)
				mini=temp;
		}
		a[n-1][k-1]=1+mini;
		return a[n-1][k-1];
	}
}

int main(){
	for(int i=0;i<10;i++){
		for(int j=0;j<50;j++)
			a[i][j]=0;
	}
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<fun(n,k)<<endl;
	}
}
