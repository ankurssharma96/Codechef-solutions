#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int k,s=0;
		long long int a[3];
		
		cin>>a[0]>>a[1]>>a[2];
		cin>>k;
		k--;
		
		sort(a,a+3);
		
		if(k<a[0])
		{
			s+=3*k;
			k=0;
		}
			
			
		if(k>=a[0])
		{
			s+=3*a[0];
			a[1]-=a[0];
			a[2]-=a[0];
			k-=a[0];
		}
		if(k>=a[1])
		{
			s+=2*a[1];
			k-=a[1];
			a[2]-=a[1];
		}
		else if(k)
		{
			s+=2*k;
			k=0;
		}
		if(k)
		{
			s=s+k;	
		}
	
		s++;
		cout<<s<<endl;
	}
}
