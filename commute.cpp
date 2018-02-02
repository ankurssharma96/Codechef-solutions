#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,time=0,temp=0;
		cin>>n;
		int x,l,f;
		while(n--)
		{
			temp=0;
			cin>>x>>l>>f;
			if(x>t)
			time=x+l;
			else
			{
				while(x+temp*f<time)
				{
					temp++;
				}
				time=x+temp*f+l;
			}
		}
		cout<<time<<endl;
	}
}
