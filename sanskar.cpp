#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,temp1=0;
		cin>>n>>k;
		long long int a[n],sum=0,b[n+1];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			b[i]=sum;		
		}
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<" ";		
		}
		long long int z=sum/k;
		for(int i=0;i<n;i++)
		{
			if(b[i]%z==0)
			temp1++;
		}
		if(temp1==k)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
		temp1=0;sum=0;
	}
}
