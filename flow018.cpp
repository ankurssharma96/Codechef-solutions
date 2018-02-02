#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int num;
	long long int fact=1;
	while(t--)
	{
		cin>>num;
		while(num>1)
		{
			fact=fact*num;
			num--;
		}
		cout<<fact<<endl;
		fact=1;
	}
}
