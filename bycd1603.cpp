#include<iostream>
using namespace std;
int main()
{
	long long int num,temp1,l,m,n,temp2=0;
	long long int res=0;
	cin>>num;
	temp1=num;
	while(temp1>0)
	{
		temp1=temp1/10;
		temp2++;
		
	}
	temp1=num;
	for(long long int i=0;i<temp2-2;i++)
	{
		l=temp1%10;
		temp1=temp1/10;
		m=temp1%10;
		temp1=temp1/10;
		n=temp1%10;
		temp1=temp1/10;
		if((l+n)==2*m)
		{
			res++;
		}
		num=num/10;
		temp1=num;
	}
	cout<<res;
}
