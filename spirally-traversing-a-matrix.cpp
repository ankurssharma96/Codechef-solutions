#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[4][4];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++)
				cin>>a[i][j];
		}
		for(int j=0;j<4;j++)
			cout<<a[0][j]<<" ";
		for(int i=1;i<4;i++)
			cout<<a[i][3]<<" ";
		for(int j=2;j>=0;j--)
			cout<<a[3][j]<<" ";	
		for(int i=2;i>=1;i--)
			cout<<a[i][0]<<" ";
		cout<<a[1][1]<<" "<<a[1][2]<<" "<<a[2][2]<<" "<<a[2][1]<<" ";
		cout<<endl;
	}
}
