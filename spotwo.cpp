#include<iostream>
#include<math.h>
using namespace std;

unsigned long long int fun(long long int n)
{
	unsigned long long int bin=0;
	unsigned long long int i=0;
	while(n)
	{
		unsigned long long int temp=pow(10,i);
		bin=bin+((n%2)*temp);
		n=n/2;
		i++;
	}
	return bin;
}

unsigned long long int fun1(unsigned long long int n)
{
	unsigned long long int base=4;
	unsigned long long int res=1;
	while(n)
	{
		if(n%2==1)
		{
			res=(res*base)%1000000007;
		}
		base=(base*base)%1000000007;
		n=n >> 1;
	}
	return res;
}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,bin,res;
		cin>>n;
		bin=fun(n);
	//	cout<<bin;
		res=fun1(bin);
		cout<<res<<endl;
	}
}
