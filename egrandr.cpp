#include<iostream>
using namespace std;
int main()
{
	long long int t,avg;
	cin>>t;
	while(t--)
	{
		long long int n,i,sum=0,temp=0,temp1=1;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			
			if(a[i]==5)
				temp=1;
			else if(a[i]==2)
				temp1=0;
		}	
		temp=temp*temp1;
		avg=sum/n;
		if(avg>=4 && temp)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
