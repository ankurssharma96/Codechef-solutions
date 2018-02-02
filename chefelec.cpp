#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j,sum=0,ctr=0;
		cin>>n;
		char a[n+1];
		cin>>a;
		long long int x[n],y[n-1],z[n];
		for(i=0;i<n;i++)
		{
			cin>>x[i];
			if(a[i]=='1')
			{
				z[ctr]=i;
				ctr++;
			}
		}
		for(i=0;i<n-1;i++)
		{
			y[i]=x[i+1]-x[i];
		}
		sum=sum+(x[z[0]]-x[0])+(x[n-1]-x[z[ctr-1]]);
		
		for(i=0;i<ctr-1;i++)
		{
			long long int max=0;
			for(j=z[i];j<z[i+1];j++)
			{
				if(y[j]>max)
					max=y[j];
			}
			sum=sum+(x[z[i+1]]-x[z[i]])-max;
		}
		cout<<sum<<endl;
	}
}
