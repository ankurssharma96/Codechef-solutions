#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
		int t;
		cin>>t;
		long long int n;
		while(t--)
		{
			cin>>n;
			long long int a[n],i,j=0;
			for(i=0;i<n;i++)
			{
				cin>>a[i];	
			}
			sort(a,a+n);
			for(i=1;i<n;i++)
			{
				if(a[i]==a[i-1])
				{
					continue;
				}
				else
				{
					j++;	
				}
			}
			cout<<j+1<<endl;
		}
}
