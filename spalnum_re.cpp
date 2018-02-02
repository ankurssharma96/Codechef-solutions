#include<iostream>
#include<math.h>
using namespace std;
long long int ispal(long long int n)
{
	long long int sum=0,temp=n;
	while(temp)
	{
		sum+=(temp%10);
		sum*=10;
		temp/=10;
	}
	sum/=10;
	if(sum==n)
	return sum;
	else
	return 0;
}

int main()
{
	long long int t,l,r,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		for(long long int i=l;i<=r;i++)
		{
			sum+=ispal(i);
		}
		cout<<sum<<endl;
		sum=0;
	}
}
