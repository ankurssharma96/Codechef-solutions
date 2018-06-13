#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int v;
		cin>>v;
		int a[v][v];
		
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){
				cin>>a[i][j];
			}
		}
		for (int k = 0; k < v; k++){
			for (int i = 0; i < v; i++){
				for (int j = 0; j < v; j++){
					if (a[i][k] + a[k][j] < a[i][j])
						a[i][j] = a[i][k] + a[k][j];
				}
			}
		}
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){
				cout<<a[i][j]<<" ";
			}
		}	
		cout<<endl;	
	}
}
