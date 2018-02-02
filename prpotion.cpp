#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	unsigned long long int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int r,g,b,m;
		cin>>r>>g>>b>>m;
		
		unsigned long long int R[r],G[g],B[b];	
		for(unsigned long long int i=0;i<r;i++)
		{
			cin>>R[i];
		}
		for(unsigned long long int i=0;i<g;i++)
		{
			cin>>G[i];
		}
		for(unsigned long long int i=0;i<b;i++)
		{
			cin>>B[i];
		}
		
		while(m--)
		{
			unsigned long long int i,j,k;
			i=*max_element(R,R+r);
			j=*max_element(G,G+g);
			k=*max_element(B,B+b);
			
			if(max(i,j)==max(i,k) && max(i,k)==i)
			{
			
				for(unsigned long long int iq=0;iq<r;iq++)	
				{	R[iq]/=2;	
					}
			}
			else if(max(i,j)==max(j,k) && max(j,k)==j)
			{
			
				for(unsigned long long int iq=0;iq<g;iq++)	
				{
						G[iq]/=2;	
					}
			}
			else if(max(i,k)==max(j,k) && max(j,k)==k)
			{
			
				for(unsigned long long int iq=0;iq<b;iq++)	
					{
					B[iq]/=2;	
					}
			}
		}
		
			unsigned long long int i,j,k;
			i=*max_element(R,R+r);
			j=*max_element(G,G+g);
			k=*max_element(B,B+b);
			
			if(max(i,j)==max(i,k) && max(i,k)==i)
			{
				cout<<i<<endl;	
			}
			else if(max(i,j)==max(j,k) && max(j,k)==j)
			{
				cout<<j<<endl;	
			}
			else if(max(i,k)==max(j,k) && max(j,k)==k)
			{
				cout<<k<<endl;	
			}
	}
}
