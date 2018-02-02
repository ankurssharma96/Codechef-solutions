#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,m;
		cin>>n>>m;
		if(n==1 && m==1)
			cout<<"Yes"<<endl;
		else if(n==1 && m!=1 && m!=2)
			cout<<"No"<<endl;
		else if(n!=1 && n!=2 && m==1)
			cout<<"No"<<endl;
		else if(n%2==0 || m%2==0)
			cout<<"Yes"<<endl;
		else	
			cout<<"No"<<endl;
	}
}
