#include<iostream>
#include<algorithm>
using namespace std;

long long int lcs(char *X, char *Y, long long int m, long long int n){
	long long int i,j,L[m+1][n+1];
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			if(i==0 || j==0){
				L[i][j]=0;
			}
			else if(X[i-1]==Y[j-1]){
				L[i][j]=L[i-1][j-1]+1;
			}
			else
				L[i][j]=max(L[i][j-1],L[i-1][j])
		}
	}
	return L[m][n];
}

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int p,q,mx;
		cin>>p>>q;
		string s1,s2;
		cin>>s1>>s2;
		mx=max(p,q);
		cout<<mx-lcs(s1,s2,p,q)<<endl;
	}
}