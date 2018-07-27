#include<iostream>
using namespace std;

int arr[1001][1001];

int funUtil(string s,int i,int j){
	
	if(i>j)
		return 0;
	
	if(arr[i][j]!=-1){
		return arr[i][j];
	}
		
	if(i==j){
		arr[i][j]=1;
		return arr[i][j];
	}
	
	if(s[i]==s[j]){
		arr[i][j]=2+funUtil(s,i+1,j-1);
		return arr[i][j];
	}
	else{
		arr[i][j]=max(funUtil(s,i+1,j),funUtil(s,i,j-1));
		return arr[i][j];
	}
}

int fun(string s){
	int i=0;
	int j=s.length()-1;
	int sum=0;
	return sum+funUtil(s,i,j);
}


/*
int fun(string s){
	int n=s.length();
	int a[n][n];
	for(int i=0;i<n;i++)
		a[i][i]=1;
	
	for(int l=2;l<=n;l++){
		for(int i=0;i<n-l+1;i++){
			int j=(i+l)-1;
			if(s[i]==s[j] && l==2)
				a[i][j]=2;
			else if(s[i]==s[j])
				a[i][j]=2+a[i+1][j-1];
			else
				a[i][j]=max(a[i+1][j],a[i][j-1]);
		}
	}
	
	return a[0][n-1];
}
*/
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.length();
		for(int i=0;i<=l;i++){
			for(int j=0;j<=l;j++){
				arr[i][j]=-1;
			}
		}
		cout<<l-fun(s)<<endl;
	}
}
