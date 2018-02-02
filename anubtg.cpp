#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+5];
		a[0]=0;a[1]=0;a[2]=0;a[3]=0;a[4]=0;
		for(int i=5;i<n+5;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n+5);

		for(int i=n+4;i>=1;i=i-4)
		{
			sum+=a[i]+a[i-1];
		}
		cout<<sum<<endl;
		sum=0;
	}
}
