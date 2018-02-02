#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		long int temp1=a[k-1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
					long int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]==temp1)
			{
				cout<<i+1<<endl;
			}
		}
	}
}
