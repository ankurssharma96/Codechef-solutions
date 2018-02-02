#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,ctr=0;
		cin>>n;
		long long int a[n];
		long long int prod=1;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			prod*=a[i];
		}
		for(i=1;i<=prod;i++)
		{
			if(prod%i==0)
			{
				ctr++;
			}
		}
		cout<<ctr<<endl;
	}
}
