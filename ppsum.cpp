#include<iostream>
using namespace std;
int fun(int d, int n)
{
	while(d)
	{
		n=(n)*(n+1)/2;
		d--;
		fun(d,n);
	}
	return n;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,n;
		cin>>d>>n;
		cout<<fun(d,n)<<endl;
		d=0;n=0;
	}
}
