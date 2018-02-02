#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		if(n%2 && m%2)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
}
