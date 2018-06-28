#include<iostream>
#include<string.h>
using namespace std;

void sieve(int n){
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	for(int i=2;i<=n;i++){
		if(prime[i]){
			cout<<i<<" ";
			for(int j=2*i;j<=n;j=j+i)
				prime[j]=false;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		sieve(n);
		cout<<endl;
	}
}
