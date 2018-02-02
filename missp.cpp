#include<iostream>
using namespace std;
int main()
{
	long int t,num,temp=0;
	cin>>t;
	while(t--)
	{
		cin>>num;
		long int A[num];
		for(long int i=0;i<num;i++)
		{
			cin>>A[i];
			if((A[i]%2)!=0)
			{
				temp++;
			}
		}
		cout<<temp<<endl;
	}
}
