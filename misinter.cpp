#include<iostream>
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
		ll a[n];
		for(ll i=0;i<n;i++)
			a[i]=i+1;
		
		ll b[n],i;
		for(i=0;i<n/2;i++)	
			b[i]=a[i]*2;
		ll temp=1;
		for(i;i<n;i++)
		{	
			b[i]=temp;
			temp=temp+2;
		}
	
		ll ctr=0;
		ll temp1;
		for(ll i=0;i<n;i++)
		{
			if(a[i]!=-1)
			{
				ctr++;
				a[i]=-1;
				temp1=b[i];
				while(a[temp1-1]!=-1)
				{
					a[temp1-1]=-1;
					temp1=b[temp1-1];
				}
			}
		}
		cout<<modular_pow(26, ctr , 1000000007)<<endl;
		
	}
}

