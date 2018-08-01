#include<iostream>
#include<limits.h>
using namespace std;

int fun(string x,string y,int m,int n){
	int a[m][n];
	int maxx=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0 || j==0){
				if(x[i]==y[j]){
					a[i][j]=1;
					maxx=max(maxx,a[i][j]);
				}
					
				else
					a[i][j]=0;
			}
			else if(x[i]==y[j]){
				a[i][j]=1+a[i-1][j-1];
				maxx=max(maxx,a[i][j]);
			}
			else a[i][j]=0;
		}
	}
	return maxx;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		string x,y;
		cin>>x>>y;
		cout<<fun(x,y,a,b)<<endl;
	}
}
