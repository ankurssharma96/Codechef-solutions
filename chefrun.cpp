#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j,k=0,temp=0,tmp=0,ans=0;
		cin>>n;
		long long int a[n],c[n];
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			c[i]=0;
		}

		for(i=0;i<n;i++)
		{	
			temp=i;
			if(c[temp]==0)
			{
				while(c[temp]==0)
				{
					c[temp]=1;
					k=a[temp];
					temp=temp+k+1;
					temp%=n;
				}
				tmp=temp;
				while(c[tmp]==1)
				{
					c[tmp]=5;
					ans++;
					k=a[tmp];
					tmp=tmp+k+1;
					tmp%=n;
				}	
			}		
		}
		cout<<ans<<endl;
	}
}
