#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,sum=0,min,i;
		cin>>n>>x;
		int a[n];
		min=a[0];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
			if(a[i]<min)
				min=a[i];
		}
		if((sum%x)>=min)
			cout<<"-1"<<endl;
		else
			cout<<sum/x<<endl;
	}
}
