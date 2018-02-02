#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,temp=0;
	cin>>t;
	string s,s1;
	while(t--)
	{
		temp=0;
		cin>>s;
		cin>>s1;
		
		int i=0,j=0;
		while(s1[i]!='\0')
		{
			j=0;
			while(s[j]!='\0')
			{
				if(s1[i]==s[j])
				{
					temp++;
					break;
				}
				j++;
			}
			i++;
		}
		cout<<temp<<endl;
	}
}
