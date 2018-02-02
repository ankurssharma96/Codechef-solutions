#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i;
		long long int i1=0;
		long long int i2=0;
		long long int i3=0;
		cin>>n;
		char c[n];
		for(i=0;i<n;i++)
		{
			cin>>c[i];
			if(c[i]=='R')
				i1++;
			else if(c[i]=='G')
				i2++;
			else if(c[i]=='B')
				i3++;
		}
		long long int max=i1;
		if(i2>=max && i2>=i3)
			max=i2;
		else if(i3>=max && i3>=i2)
			max=i3;
			
		cout<<(n-max)<<endl;
	}
}
