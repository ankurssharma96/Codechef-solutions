#include<iostream>
#include<algorithm>
char a[10][10];
using namespace std;
int fun(int n){
	int h[n][n],v[n][n];
	
	h[0][0]=v[0][0]=(a[0][0]=='X');
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='O'){
				h[i][j]=v[i][j]=0;
			}
			else{
				h[i][j]=(j==0)?1:h[i][j-1]+1;
				v[i][j]=(i==0)?1:v[i-1][j]+1;
			}
		}
	}
	
	int max=0;
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			int small=min(h[i][j],v[i][j]);
			while(small>max){
				if(h[i-small+1][j]>=small && v[i][j-small+1]>=small){
					max=small;
				}
				small--;
			}
		}
	}
	return max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		cout<<fun(n)<<endl;				
	}
	
	
}
