#include<iostream>
using namespace std;
int main()
{
	long long int n,i,t,q,sum=0,j;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>t;
	cin>>q;
	long long int s[q];
	for(i=0;i<q;i++)
	{
		cin>>s[i];
	}
	for(j=0;j<t;j++)
	{
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		if(sum>1000000007)
			{
				sum=sum%1000000007;
			}
		for(i=0;i<n;i++)
		{
			a[i]=sum-a[i];
		}
		sum=0;
	}
	for(i=0;i<q;i++)
	{
		cout<<a[s[i]-1]<<endl;
	}
}
