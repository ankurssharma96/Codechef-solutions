#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,m,c,i;
		cin>>n>>m>>c;
		long long int ctr=0;
		for(i=1;i<=sqrt(c);i++){
			if((i*i)!=c){
				if(c%i==0){
					if(i<=n && (c/i)<=m){
						ctr++;
					}
					if(i<=m && (c/i)<=n){
						ctr++;
					}
				}
			}
			else{
				if(c%i==0){
					if(i<=n && (c/i)<=m){
						ctr++;
					}
				}
			}
		}
		cout<<ctr<<endl;		
	}
}
