#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,m,j,i;
		cin>>n>>m;
		long long int a[m],b[m];
		
		
		int arr[n][n];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				arr[i][j]=0;
		}
		
		for(i=0;i<m;i++){
			cin>>a[i]>>b[i];
			arr[a[i]-1][b[i]-1]=1;
			arr[b[i]-1][a[i]-1]=1;
		}
		int temp[n];
		int temp1[n];
		for(i=0;i<n;i++)
		{
			temp[i]=arr[0][i];
		}
	
		for(i=1;i<n;i++){
			for(j=0;j<n;j++){
				if(arr[i][j]==0){
					temp[j]=0;
				}
			}
		}
		i=0;
		int z[n];
		for(j=0;j<n;j++){
			if(temp[j]==0){
				z[i]=j;
				i++;
			}
		}
		int l=i;
		for(j=0;j<n;j++)
		{
			temp1[j]=arr[i][j];
		}
		
		for(i=0;i<l;i++){
			for(j=0;j<n;j++){
				if(arr[z[i]][j]==0){
					temp1[j]=0;
				}
			}
		}
		
		for(j=0;j<n;j++)
		{
			temp1[j]+=temp[j];
		}
		int flag=0;
		for(j=0;j<n;j++)
		{
			if(temp1[j]==0){
				flag=1;
				break;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
			
	}
		
}
