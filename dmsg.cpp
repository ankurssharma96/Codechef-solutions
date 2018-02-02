#include<iostream>

using namespace std;
int main()
{
	string s;
	cin>>s;
	
	string s2="iloveyou";

	int ctr=0,i=0,j=0;
	
	for(i=0;i<s2.length();i++)
	{
		for(j=0;j<s.length();j++)
		{
			if(s2[i]==s[j])
			{
				s[j]='z';
				ctr++;
				break;
				
			}
			
		}
	}

	if(ctr>=8)
	{
		cout<<"happy"<<endl;
	}
	else
	{
		cout<<"sad"<<endl;
	}
}
