#include<iostream>
using namespace std;
int main()
{
	int l;
	cin>>l;
	char s[l];
	cin>>s;
	for(int i=0;i<l;i++)
	{
		int temp=i;
		for(int j=0;j<l-i;j++)
		{
			for(int k=temp;k<l-i;k++)
				cout<<s[k];
			cout<<endl;
		}
	}
}
