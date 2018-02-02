#include<iostream>
#define ll long long
using namespace std;
int main()
{
	ll j,s,m;
	cin>>j>>s>>m;
	if(j<=m)
	{
		m=m-j;
	}
	ll temp=2*s;
	if((m%temp)>=s)
	{
		cout<<"Unlucky Chef";
		return 0;
	}
	else
	{
		cout<<"Lucky Chef";
		return 0;
	}
}
