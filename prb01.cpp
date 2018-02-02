#include<iostream>
using namespace std;

void prime(int a)
{	int temp=0;
	for(long int i=2;i<a;i++)
	{
		if(a%i==0)
		temp++;
	}
	if(temp)
	cout<<"no"<<endl;
	else
	cout<<"yes"<<endl;
}

int main()
{
	int t;
	long int a;
	cin>>t;//cout<<endl;
	while(t--)
	{
		cin>>a;//cout<<endl;
		prime(a);
	}
}
