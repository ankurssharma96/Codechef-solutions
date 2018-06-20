#include<iostream>
#include<math.h>
using namespace std;

int fun(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
		
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
	
	int diff;
	for(int i=sum/2;i<=sum;i++){
		if(k[n][i]){
			diff=abs(2*i-sum);
			break;
		}
			
	}/*
	for (int j=sum/2; j>=0; j--){
        if (k[n][j] == true){
            diff = sum-2*j;
            break;
        }
    }*/
	return diff;
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
		cout<<fun(a,n)<<endl;
	}
}
