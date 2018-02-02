#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long int t,num,temp,rev=0,i=0;
	cin>>t;
	while(t--)
	{
		cout<<endl;
		cin>>num;
		temp=num;
		while(temp)
		{
			i++;
			temp=temp/10;
		}
		temp=num;	
		while(i)
		{
			rev=rev+((temp%10)*(pow(10,(i-1))));
			temp=temp/10;i--;
		}
		if(rev==num)
		cout<<"wins";
		else
		cout<<"losses";
		rev=0;
	}
}
