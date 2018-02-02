#include<iostream>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	long int a[n+1];
	long int b[n+1];
	for(long int i=0;i<n;i++)
	{
		cin>>a[i+1];
		b[1+i]=-1;
	}
	
	for(long int i=0;i<n;i++)
	{
	
		b[a[i+1]]=1;
	}
	for(long int i=0;i<n;i++)
	{
		if(b[i+1]==-1)
		cout<<i+1<<" ";
	}
}
