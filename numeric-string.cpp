#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;
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
int main(){
	string s;
	cin>>s;
	ll k,b,m;
	cin>>k>>b>>m;
	ll len=s.length();
	ll iterations=len-k+1;
	ll sum=0;
	for(ll i=0;i<iterations;i++){
		string s1=s.substr(i,k);
		ll len1=s1.length();
		ll sum1=0;
		ll k=0;
		//cout<<s1<<endl;
		for(ll j=len1-1;j>=0;j--){
			sum1+=(s1[j]-'0')*modular_pow(b,k,m);
			k++;
		}
		//cout<<sum1<<endl;
		sum1=sum1%m;
		sum=sum+sum1;
		sum1=0;
		k=0;
	}
	cout<<sum;
}
