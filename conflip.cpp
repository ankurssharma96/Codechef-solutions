#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int t1;
		cin>>t1;
		while(t1--)
		{
			int i,q;
			long int n;
			cin>>i>>n>>q;
			int a[n];
			for(long int j=0;j<n;j++)
			{
				a[j]=1;
				a[j]*=pow((-1),(n-j));
			}
/*			for(long int k=0;k<n;k++)
			{
				long int j=0;
				while(j<=k)
				{
					a[j]*=-1;
					j++;
				}
			}*/
			long int temp1=0,temp2=0;
			for(long int j=0;j<n;j++)
			{
				if(a[j]==1)
				temp1++;
				else
				temp2++;
			}
/*			long int head,tail;
			if(i==1)
			{
				head=temp1;
				tail=temp2;
			}
			else
			{
				head=temp2;
				tail=temp1;
			}
			if(q==1)
			cout<<head<<endl;
			else
			cout<<tail<<endl;*/
			
			if(i==1 && q==1)
			cout<<temp1<<endl;
			else if(i==1 && q==2)
			cout<<temp2<<endl;
			else if(i==2 && q==1)
			cout<<temp2<<endl;
			else if(i==2 && q==2)
			cout<<temp1<<endl;
			
			
		}
	}
}
