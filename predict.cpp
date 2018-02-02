#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		double p;
		cin>>p;
		if(p>=0.5)
			cout<<fixed<<setprecision(6)<<(10000+10000*(1-p)*(2*p-1))<<endl;
		else
			cout<<fixed<<setprecision(6)<<(10000+10000*p*(1-2*p))<<endl;
	}
	
}
