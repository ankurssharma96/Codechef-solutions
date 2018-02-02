#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,n,i,sum=0;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(i=n-1;i>=0;i=i-2)
		{
			sum+=a[i];
		}
			
		cout<<sum<<endl;
	}
}
