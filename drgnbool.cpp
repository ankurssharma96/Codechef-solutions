#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		int n,m,i,j;
		cin>>n>>m;
		int c1[n],l1[n];
		int c2[m],l2[m];
		for(i=0;i<n;i++)
		{
			cin>>c1[i]>>l1[i];
		}
		for(i=0;i<m;i++)
		{
			cin>>c2[i]>>l2[i];
		}
	
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(l1[i]==l1[j])
				{
					c1[i]+=c1[j];
					c1[j]=0;
				}
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=i+1;j<m;j++)
			{
				if(l2[i]==l2[j])
				{
					c2[i]+=c2[j];
					c2[j]=0;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(l1[i]==l2[j])
				{
					if(c2[j]>c1[i])
					{
						sum+=c2[j]-c1[i];
					}
				}
			}
		}
		cout<<sum<<endl;
	}
}
