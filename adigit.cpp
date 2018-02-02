#include<iostream>
using namespace std;
int main()
{
	long long int n,m,i,x,temp,sum=0;
	cin>>n;
	cin>>m;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		sum=0;
		cin>>x;
		for(i=x-2;i>=0;i--)
		{
			temp=a[x-1]-a[i];
			
			if(temp>0)
				sum+=temp;
			else
				sum-=temp;
		}
		cout<<sum<<endl;
	}
}
