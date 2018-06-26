#include<iostream>
#include<limits.h>
#define ll long long
using namespace std;
ll modular_pow(ll base, ll exponent, int modulus){
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int max=INT_MIN;
		int min=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>max)
				max=a[i];
			if(a[i]<min)
				min=a[i];
		}
		int mn=0,mx=0;
		for(int i=0;i<n;i++){
			if(a[i]==min)
				mn++;
			if(a[i]==max)
				mx++;
		}
		cout<<modular_pow(2,mx,1000000007)-1;
		cout<<" ";
		cout<<modular_pow(2,mn,1000000007)-1;
		cout<<endl;
	}
}
