#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		char p[10];
		cin>>p;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int temp,i;
		if(n==1 && a[0]%2==0 && strcmp(p,"Dee")==0)
		cout<<"Dee"<<endl;
		else
		cout<<"Dum"<<endl;
	}
}
