#include<iostream>
using namespace std;
int main()
{
	long long int n,q,i,x,y;
	cin>>n>>q;
	long long int a[n];
	cin>>a[0];
	x=y=a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<x)
			x=a[i];
		if(a[i]>y)
			y=a[i];
	}
	while(q--)
	{
		long long int t;
		cin>>t;
		if(t>=x && t<=y)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
