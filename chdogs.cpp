#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int s,v;
		float i;
		cin>>s>>v;
		i=(2*float(s))/(3*float(v));
		printf("%0.7f\n",i);
		}
}
