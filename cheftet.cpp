#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j,k=0,ctr=0;
		cin>>n;
		
		long long int b[n],a[n],z[n],d[n],temp[n];
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			temp[i]=b[i];
			z[i]=0;
		}
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		long long int x[4],y[4],c[20],res[200];
		x[0]=a[0];	x[1]=a[0]+b[0];	x[2]=a[0]+b[1];	x[3]=a[0]+b[0]+b[1];
		y[0]=a[n-1];	y[1]=a[n-1]+b[n-1];	y[2]=a[n-1]+b[n-2];	y[3]=a[n-1]+b[n-1]+b[n-2];
		
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(x[i]==y[j])
				{
					c[k]=x[i];
					k++;
				}
			}
		}
		
		
		
		
		
		
		for(j=0;j<k;j++)
		{
			for(i=0;i<n;i++)
			{
				if(a[i]==c[j])
					z[i]=1;
			}
			
			for(i=0;i<n;i++)
			{
				d[i]=a[i]+b[i];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i]=0;
				}
			}	
		
			for(i=1;i<n;i++)
			{
				d[i]=a[i]+b[i-1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i-1]=0;
				}
			}
			for(i=0;i<n-1;i++)
			{
				d[i]=a[i]+b[i+1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i+1]=0;
				}
			}
			
			for(i=1;i<n;i++)
			{
				d[i]=a[i]+b[i]+b[i-1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i]=0;
					b[i-1]=0;
				}
			}
			for(i=0;i<n-1;i++)
			{
				d[i]=a[i]+b[i]+b[i+1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i]=0;
					b[i+1]=0;
				}
			}
			
			for(i=1;i<n-1;i++)
			{
				d[i]=a[i]+b[i-1]+b[i+1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i+1]=0;
					b[i-1]=0;
				}
			}
			
			for(i=1;i<n-1;i++)
			{
				d[i]=a[i]+b[i]+b[i-1]+b[i+1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i]=0;
					b[i+1]=0;
					b[i-1]=0;
				}
			}
			int w=0;
			for(i=0;i<n;i++)
			{
				if(z[i]==0)
				{
					w=1;
				}
			}
			if(w==0)
			{
				res[ctr]=c[j];
				ctr++;
			}
		}
		
		
		
		
		
		
		for(i=0;i<n;i++)
		{
			b[i]=temp[i];
			z[i]=0;
		}
		for(j=0;j<k;j++)
		{
			for(i=0;i<n;i++)
			{
				if(a[i]==c[j])
					z[i]=1;
			}
			
			
		
			for(i=1;i<n;i++)
			{
				d[i]=a[i]+b[i-1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i-1]=0;
				}
			}
			for(i=0;i<n-1;i++)
			{
				d[i]=a[i]+b[i+1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i+1]=0;
				}
			}
			
			for(i=1;i<n;i++)
			{
				d[i]=a[i]+b[i]+b[i-1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i]=0;
					b[i-1]=0;
				}
			}
			for(i=0;i<n-1;i++)
			{
				d[i]=a[i]+b[i]+b[i+1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i]=0;
					b[i+1]=0;
				}
			}
			for(i=0;i<n;i++)
			{
				d[i]=a[i]+b[i];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i]=0;
				}
			}	
			for(i=1;i<n-1;i++)
			{
				d[i]=a[i]+b[i-1]+b[i+1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i+1]=0;
					b[i-1]=0;
				}
			}
			
			for(i=1;i<n-1;i++)
			{
				d[i]=a[i]+b[i]+b[i-1]+b[i+1];
				if(d[i]==c[j])
				{
					z[i]=1;
					b[i]=0;
					b[i+1]=0;
					b[i-1]=0;
				}
			}
			int w=0;
			for(i=0;i<n;i++)
			{
				if(z[i]==0)
				{
					w=1;
				}
			}
			if(w==0)
			{
				res[ctr]=c[j];
				ctr++;
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		sort(res,res+ctr);
		if(ctr)
			cout<<res[ctr-1]<<endl;
		else
			cout<<"-1"<<endl;
	}
}
