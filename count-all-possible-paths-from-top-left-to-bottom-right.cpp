#include<iostream>
using namespace std;

int fun(int n,int m){
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0 || j==0){
				a[i][j]=1;
			}
			else{
				a[i][j]=a[i-1][j]+a[i][j-1];
				a[i][j]%=1000000007;
			}
		}
	}
	return a[n-1][m-1];
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
