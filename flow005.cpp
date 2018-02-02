#include<iostream>
using namespace std;

int main()
{
	int t;
	long int num,temp;
	int cu1,cu2,cu5,cu10,cu50,cu100;
	int cu;
	cin>>t;
	
	while(t--)
	{
		cu1=cu2=cu5=cu10=cu50=cu100=0;
		cout<<endl;
		cin>>num;	
		
		temp=num;
		if((temp/100)>=1)
		{
			cu100=temp/100;
			temp=temp-(100*cu100);
		}
		if((temp/50)>=1)
		{
			cu50=temp/50;
			temp=temp-(50*cu50);
		}
		if((temp/10)>=1)
		{
			cu10=temp/10;
			temp=temp-(10*cu10);
		}
		if((temp/5)>=1)
		{
			cu5=temp/5;
			temp=temp-(5*cu5);
		}
		if((temp/2)>=1)
		{
			cu2=temp/2;
			temp=temp-(2*cu2);
		}
		if((temp/1)>=1)
		{
			cu1=temp/1;
			temp=temp-(1*cu1);
		}

		cout<<cu100+cu50+cu10+cu5+cu2+cu1;
	}
}
