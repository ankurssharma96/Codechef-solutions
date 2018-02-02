#include<iostream>
using namespace std;
int main()
{
	int t,t1;
	cin>>t;
	t1=t;
	while(t--)
	{
		int n,i,j,sum=0;
		cin>>n;
		int p[n],q[n];
		for(i=0;i<n;i++)
		{
			cin>>p[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>q[i];
		}
		
		for(i=0;i<n;i++)
		{
			sum=0;
			int temp1=i;
			while(temp1<n)
			{
				sum=sum+p[temp1]-q[temp1];
				temp1++;
				if(sum<0)
					break;
			}
			if(sum>=0)
				for(j=0;j<i;j++)
				{
					sum=sum+p[j]-q[j];
					if(sum<0)
					break;
				}
			
			
			if(sum>=0)
			{
				cout<<"Case "<<t1-t<<": "<<"Possible from station "<<i+1<<endl;
				break;
			}
		}
		if(sum<0)
		{
			cout<<"Case "<<t1-t<<": "<<"Not possible"<<endl;
		}
	}
}
