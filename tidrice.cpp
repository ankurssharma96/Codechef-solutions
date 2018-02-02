#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		sort(s,s+n);
		int res=0;
		for(int i=n-1;i>=0;i--)
		{
			if((s[i]==s[i-1]))
			{
				continue;	
			}
			
			else
			{
				int z=s[i].length();
				if(s[i][z-1]=='+')
				res+=1;
				else if(s[i][z-1]=='-')
				res-=1;
			}
		cout<<res;
		}
	}
}
