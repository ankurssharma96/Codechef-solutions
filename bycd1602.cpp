#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int sum=0;
		for(long long int i=0;i<n-1;i++)
		{
			if(a[i+1]>a[i])
			{
				sum=sum+(a[i+1]-a[i]);
				a[i+1]=a[i];
			}
		}
		cout<<sum<<endl;
		
	}
}
