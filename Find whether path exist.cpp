#include<iostream>
#include<limits.h>
using namespace std;
int a[25][25];
int b[25][25];
int count=0;

void fun(int n,int i,int j){
	b[i][j]=1;
	if(a[i][j]==2){
		count=1;
		return;
	}
	else
	{
		int y[]={j-1,j,j,j+1};
		int x[]={i,i-1,i+1,i}; 
		for(int p=0;p<4;p++){
			if(x[p]>=1 && x[p]<=n && y[p]>=1 && y[p]<=n){
				if(b[x[p]][y[p]]==0 && a[x[p]][y[p]]!=0)
					fun(n,x[p],y[p]);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int max=INT_MIN;
		int n;
		cin>>n;

		for(int i=0;i<25;i++){
			for(int j=0;j<25;j++){
				a[i][j]=-1;
				b[i][j]=0;
			}
		}
		
		int x,y;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				if(a[i][j]==1){
					x=i;
					y=j;
				}
			}
		}
		count=0;
		fun(n,x,y);
		if(count)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}
