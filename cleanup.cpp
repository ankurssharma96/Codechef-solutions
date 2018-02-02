#include<iostream>
using namespace std;
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int arr[m];
		int arr1[n+1];
		int res[m];
		for(int i=0;i<n+1;i++)
		{
			arr1[i]=0;
		}
		for(int i=0;i<m;i++)
		{
			cin>>arr[i];
			arr1[arr[i]]=1;
		}
		arr1[0]=1;
		int temp=0;
		for(int i=0;i<n+1;i++)
		{
			if(arr1[i]==0)
			{
			res[temp]=i;
			temp++;	
			}
			
		}
		for(int i=0;i<temp;i=i+2)
		{
			cout<<res[i]<<" ";
		}
		cout<<endl;
		for(int i=1;i<temp;i=i+2)
		{
			cout<<res[i]<<" ";
		}
		cout<<endl;
		
	}
}
