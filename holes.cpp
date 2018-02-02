#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len=0;
		while(s[len]!='\0')
		{
			len++;
		}
		int ho=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R')
			{
				ho=ho+1;	
			}
			
			else if(s[i]=='B')
			{
				ho=ho+2	;
			}
		}
		cout<<ho<<endl;
		
	}
}
