#include<iostream>
#include<limits.h>
using namespace std;
int a[60][60];
int b[60][60];
int count=0;

void fun(int n,int m,int i,int j){
	b[i][j]=1;
	if(a[i][j]==1){
		count++;
		int y[8]={j-1,j-1,j-1,j,j,j+1,j+1,j+1};
		int x[8]={i-1,i,i+1,i-1,i+1,i-1,i,i+1}; 
		for(int p=0;p<8;p++){
			if(x[p]>=1 && x[p]<=n && y[p]>=1 && y[p]<=m){
				if(b[x[p]][y[p]]==0)
					fun(n,m,x[p],y[p]);
			}
		}

	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int max=INT_MIN;
		int n,m;
		cin>>n>>m;
		count=0;
		for(int i=0;i<60;i++){
			for(int j=0;j<60;j++){
				a[i][j]=-1;
				b[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				count=0;
				if(a[i][j]==1 && b[i][j]==0){
					fun(n,m,i,j);
				}
				b[i][j]=1;
				if(count>max)
					max=count;	
			}
		}
		
		cout<<max<<endl;
	}
}
