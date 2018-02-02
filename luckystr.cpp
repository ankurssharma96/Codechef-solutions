#include<iostream>
#include<string.h>
using namespace std;

int check(string str2,string str1)
{
	int i,j;
	int l=str2.length();
	for(i = 0,j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
        	i=i-j;
            j = 0;
        }
    }

    if(j == l)
        return 1;
    else
        return 0;
}
int main()
{
	int k,n;
	cin>>k>>n;
	string a[k],b[n];
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	for(int i=0;i<n;i++)
	{	
		int temp=0;
		int l=b[i].length();
		if(l>=47)
		{
			temp=1;
		}
		else
		{
			for(int j=0;j<k;j++)
			{
				if(check(a[j],b[i]))
				{
					temp=1;
					goto label;
				}
			}	
		}
		label:
		if(temp==1)
		{
			cout<<"Good"<<endl;
		}
		else
		{
			cout<<"Bad"<<endl;
		}
	}
}
