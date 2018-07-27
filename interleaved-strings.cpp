#include <bits/stdc++.h>
using namespace std;

bool isInterleave(string a, string b, string c){
	int m=a.length();
	int n=b.length();
	if((m+n) != c.length())
		return false;
	
	int arr[m+1][n+1];
	memset(arr,false,sizeof(arr));
	
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 && j==0){
				arr[i][j]=true;
			}
			else if(i==0 && b[j-1]==c[j-1]){
				arr[i][j]=arr[i][j-1];
			}
			else if(j==0 && a[i-1]==c[i-1]){
				arr[i][j]=arr[i-1][j];
			}
			else if(a[i-1]==c[i+j-1] && b[j-1]!=c[i+j-1]){
				arr[i][j]=arr[i-1][j];
			}
			else if(a[i-1]!=c[i+j-1] && b[j-1]==c[i+j-1]){
				arr[i][j]=arr[i][j-1];
			}
			else if(a[i-1]==c[i+j-1] && b[j-1]==c[i+j-1]){
				arr[i][j]=arr[i-1][j] || arr[i][j-1];
			}
		}
	}
	return arr[m][n];
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<isInterleave(a,b,c)<<endl;
	}
	return 0;
}
