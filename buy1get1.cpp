#include<iostream>
#include<string.h>
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
		for(int i=0;i<len-1;i++)
		{
			for(int j=0;j<len-1;j++)
			{
				if(s[j]>s[j+1])
				{
					char temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;					
				}
			}
		}

		int temp1=0,temp2=0;
		int i=0;
		while(i<len)
		{
			if(s[i]==s[i+1])
			{
				temp1++;
				i=i+2;
			}
			else
			{
				i=i+1;
				temp2++;
			}
		}
		cout<<temp1+temp2<<endl;
	}
}
