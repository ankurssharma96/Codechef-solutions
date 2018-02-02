#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int sum=0;
		sum+=2*n*(n-1)*(n-1);
		sum+=n*(n-1)*(n-2);	
		sum+=2*n*(n-1)*(n-2)*(n-2);
		cout<<sum<<endl;	
	}
}
