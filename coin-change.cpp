#include<iostream>
using namespace std;

void fun(int m,int n,int *s){
	int a[m+1][n+1];
	for(int i=0;i<=m;i++){
		int coin=s[i];
		//cout<<s[i]<<endl;
		for(int j=0;j<=n;j++){
			if(i==0 || j==0){
				a[i][j]=0;
				//cout<<a[i][j]<<" ";
			}
			else if(coin>j){
				a[i][j]=a[i-1][j];
				//cout<<a[i][j]<<" ";
			}
			else if(coin==j){
				a[i][j]=1+a[i-1][j];
				//cout<<a[i][j]<<" ";
			}
			else{
				a[i][j]=a[i-1][j]+a[i][j-coin];
				//cout<<a[i][j]<<" ";
			}
		}
		//cout<<endl;
	}
	cout<<a[m][n]<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m;
		cin>>m;
		int s[m+1];
		s[0]=0;
		for(int i=1;i<=m;i++){
			cin>>s[i];
		}
		
		int n;
		cin>>n;
		
		fun(m,n,s);
	}
}
