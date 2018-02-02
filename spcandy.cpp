#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,k;
		cin>>n>>k;
		if(k==0)
		{
			cout<<"0 "<<n;
		}
		else
		{
			cout<<n/k<<" "<<n%k<<endl;	
		}
			
	}
	
}
