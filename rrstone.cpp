#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int n,k;
	cin>>n>>k;
	long int a[n];
	for(long int i=0;i<n;i++)
	cin>>a[i];
	long int max;
	long int min;
	if(k==0)
	{
		for(long int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	return 0;		
	}
	if(k%2)
	{
		max=*(max_element(a,a+n));	
		for(long int i=0;i<n;i++)
			{
				a[i]=max-a[i];
			}
	}
	else
	{
		min=*(min_element(a,a+n));	
		for(long int i=0;i<n;i++)
			{
				a[i]=a[i]-min;
			}		
	}
	for(long int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		return 0;
}
