#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,temp;
		cin>>n;
		long long int arr[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int sm1,sm2;
		sm1=arr[0];
		for(long long int j=0;j<n;j++)
		{
			if(arr[j]<sm1)
			{
				sm1=arr[j];
				temp=j;
			}
		}

		sm2=1+arr[0];
		for(long long int i=0;i<n;i++)
		{
			if(i==temp)
			{
				continue;
			}
			else if(arr[i]<sm2 && arr[i]>=sm1)
			{
				sm2=arr[i];
			}
		}
		cout<<sm1+sm2<<endl;
	}
}
