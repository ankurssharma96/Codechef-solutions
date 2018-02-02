#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long int N,K,max;
	while(t--)
	{
		cin>>N;
		cin>>K;max=0;
		for(long int i=1;i<=K;i++)
		{
			if((N%i)>max)
			max=N%i;
		}
		cout<<max<<endl;
	}
}
