#include<iostream>
using namespace std;
int a[20][20];
int dp[20][20];

int fun1(int i,int j,int n){
	if(i<0 || i>n-1 || j<0 || j>n-1)
		return 0;
		
	if(dp[i][j] != -1)
		return dp[i][j];

	return dp[i][j]=a[i][j]+max(max(fun1(i+1,j-1,n),fun1(i+1,j,n)),fun1(i+1,j+1,n));
}

int fun(int n){
	int result=0;
	for(int i=0;i<n;i++){
		if(dp[0][i]==-1)
			fun1(0,i,n);
			
		result=max(dp[0][i],result);
	}
	return result;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++){
				dp[i][j]=-1;
				cin>>a[i][j];
			}
		cout<<fun(n)<<endl;
	}
}
