#include<iostream>
#include<algorithm>
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
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll max=*max_element(a,a+n);
		ll ctr=0;
		for(ll i=0;i<n;i++)
			if(a[i]==max)
				ctr++;
	
		cout<<modular_pow(2,ctr,1000000007)-1;
		cout<<endl;
			
	}
}
