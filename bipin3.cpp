#include<iostream>
#define ll long long
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

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,res;
		cin>>n>>k;
		
		res=modular_pow((k-1),(n-1),1000000007);
		res=(res*k)%1000000007;
		cout<<res<<endl;
	}
}
