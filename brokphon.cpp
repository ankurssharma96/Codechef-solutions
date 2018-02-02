#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int n,i,sum=0;
	while(t--)
	{
		sum=0;
		cin>>n;
		long long int a[n],a1[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			a1[i]=1;
			
		for(i=0;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
			{
				a1[i]=a1[i+1]=-1;
			}	
		}
		for(i=0;i<n;i++)
			{
				if(a1[i]==-1)
				sum++;
			}
		cout<<sum<<endl;
	}
}
