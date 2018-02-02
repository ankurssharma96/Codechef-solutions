#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		int i=0;
		int temp=0;
		while(s[i+2]!='\0')
		{
			if (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
			{
				temp=1;
			}
			else if (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
			{
				temp=1;
			}
			i++;
		}
		if(temp==1)
			cout<<"Good"<<endl;
		else
			cout<<"Bad"<<endl;
		temp=0;
	}
}
