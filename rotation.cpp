#include<iostream>
using namespace std;
int main()
{
	long long int n,m,i;
	cin>>n>>m;
	long long int r=0;
	long long int a[n];
	long long int q[m];
	char qc[m];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>qc[i]>>q[i];
	}
	for(i=0;i<m;i++)
	{
		if(qc[i]=='C')
		{
			r=r+q[i];
		}
		else if(qc[i]=='A')
		{
			r=r+(n-q[i]);
		}
		else if(qc[i]=='R')
		{
			cout<<a[(r+q[i]-1)%n]<<endl;
		}
	}
}
