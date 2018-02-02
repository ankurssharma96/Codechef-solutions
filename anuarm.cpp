#include<iostream>
using namespace std;

#define maxi(a,m)\
{\
	if(a>m)								\
				{					\
					m=a;			\
				} 	\
}			

#define mod(a,b) a-b

int main()
{
	long long int t,n,m,i,j,temp=1;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		long long int a[n],max[n];
		for(j=0;j<n;j++)
		{
			max[j]=0;
		}
		while(m--)
		{
			cin>>i;
			a[i]=0;
			for(j=i+1;j<n;j++)
			{
				a[j]=mod(j,i);
			}
			for(j=i-1;j>=0;j--)
			{
				a[j]=mod(i,j);
			}
			for(j=0;j<n;j++)
			{
				maxi(a[j],max[j]);
			}
		}
		for(j=0;j<n;j++)
		{
			cout<<max[j]<<" ";
		}
		cout<<endl;
	}
}
