#include<iostream>
#include<math.h>
using namespace std;

void fun(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	if(sum%2){
		cout<<"NO"<<endl;
		return;
	}
	bool k[n+1][sum+1];
	for(int i=0;i<=n;i++)
		k[i][0]=true;
	for(int j=1;j<=sum;j++)
		k[0][j]=false;
		
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			k[i][j]=k[i-1][j];
			if(j>=arr[i-1])
				k[i][j]=k[i][j] | k[i-1][j-arr[i-1]];
		}
	}
	
		if(k[n][sum/2]==true){
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		fun(a,n);
	}
}
