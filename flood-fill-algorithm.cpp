#include<iostream>
using namespace std;

int a[100][100];

void funUtil(int n,int m,int x,int y,int prev_col,int new_col){
	if(x<0 || x>n || y<0 || y>m)
		return;
	if(a[x][y]!=prev_col)
		return;
	a[x][y]=new_col;
	funUtil(n,m,x+1,y,prev_col,new_col);
	funUtil(n,m,x-1,y,prev_col,new_col);
	funUtil(n,m,x,y+1,prev_col,new_col);
	funUtil(n,m,x,y-1,prev_col,new_col);
}

void fun(int n,int m,int x,int y,int k){
	int new_col=k;
	int prev_col=a[x][y];
	funUtil(n,m,x,y,prev_col,new_col);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		//int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int x,y,k;
		cin>>x>>y>>k;
		fun(n,m,x,y,k);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
