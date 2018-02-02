#include<iostream>
#include<math.h>
#define ll unsigned long long int
using namespace std;
ll sum;
ll modular_pow(ll base, ll exponent, ll modulus)
{
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
void fun(ll n){
	ll temp;
	temp=n/4;
	if(temp>=1){
		sum=sum+(2*temp)-1;
		sum=sum%(1000000007);
		fun(temp);
		while(temp/2>=1){
			temp=temp/2;
			fun(temp);
		}	
	}
	else 
		return ;
}


int main(){
	ll t;
	cin>>t;
	while(t--){
		sum=0;
		ll n;
		cin>>n;
		n=modular_pow(2,n,100000000000000000);
		fun(n);
		cout<<sum<<endl;
	}
}
