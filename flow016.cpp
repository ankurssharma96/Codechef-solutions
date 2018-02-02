#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	return a;
	else 
	return gcd(b,a%b);
}

int main()
{
	int t;
	long int a,b,hcf,lcm;
	cin>>t;//cout<<endl;
	while(t--)
	{
		cin>>a;//cout<<endl;
		cin>>b;//cout<<endl;
		hcf=gcd(a,b);
		lcm=(a*b)/hcf;
		cout<<hcf<<" "<<lcm<<endl;;
	}
}
