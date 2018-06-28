#include<iostream>
#include<stdlib.h>
#define ll long long
using namespace std;

int mod_pow(int base, int expo, int mod){
	//cout<<"working";
	int result=1;
	while(expo>0){
		if(expo%2)
			result=(result*base)%mod;
		expo=expo>>1;
		base=(base*base)%mod;
	}
	return result;
}

bool isPrime(int n){
	if(n<=1 || n==4) return false;
	if(n<=3) return true;
	int k=5;
	while(k--){
		int a=2+(rand()%(n-4));
		if(mod_pow(a,n-1,n)!=1)
			return false;
	}
	return true;
}
/*
bool isPrime(int n){
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
           
    return true;
}
*/
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(isPrime(n))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
