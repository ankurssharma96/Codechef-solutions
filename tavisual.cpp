#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,c,q;
		cin>>n>>c>>q;
		int a[n+1];
		for(long int i=0;i<=n;i++)
		{
			a[i]=-1;	
		}
		a[c]=1;	
		while(q--)
		{
			long int l,r;
			cin>>l>>r;
			for(long int i=0;i<=(r-l)/2;i++)
			{
				int temp=a[l+i];
				a[l+i]=a[r-i];
				a[r-i]=temp;
			}
						
		}	
		for(long int i=0;i<n+1;i++)
		{
			if(a[i]==1)
			{
				cout<<i;
			}
		}
		
		
	}
}
