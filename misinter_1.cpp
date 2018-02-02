#include <iostream>
#define ll long long
using namespace std; 

ll modular_pow(ll base, ll exponent, int modulus)
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
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll i=0;
		if(n%2)
			i=1;
		n=n/2;
		if(n%2)
		{
			n=n/2+1+i;
		}
		else
		n=n/2+i;
		/*i=n/4;
		if(n%2==1)
		{
			i=i+1;
		}
		if((i/2)%2==1)
		{
			i=i+1;
		}*/
		cout<<modular_pow(26, n , 1000000007)<<endl;
	}
}
