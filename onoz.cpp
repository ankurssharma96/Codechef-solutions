#include<iostream>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll int h,m;
		ll int temp,temp1;
		cin>>h>>m;
		ll int res=0;
		if(h*m==0)
		{
			cout<<1<<endl;
			continue;
		}
		if(h>m)
		{
			ll int temp=m;m=h;h=temp;
		}	
		if(m>=h)
		{
			if(h>=9)
				res+=10;
			else 
				res=res+h;
				
			temp=(m-1)/11;
			if(temp<=h)
				res=res+temp;
			else
				res=res+h;
			
			temp1=(h-1)/11;
			if(m>=temp1)
				res=res+temp1;
			else
				res=res+m;
			
			res=res+min(temp,temp1);
			cout<<res<<endl;
		}
	
	}
}
