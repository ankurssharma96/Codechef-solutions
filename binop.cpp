#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		//long long int a,b;
		char a[1000001],b[1000001];
		//long long int temp1,temp2;
		long long int x,y;
		//long long int n1,n2,n3,n4;
		char n1,n2;
		long long int n3,n4;
		//n1=n2=n3=n4=x=y=0;
		n3=n4=x=y=0;
		cin>>a;
		cin>>b;
		long long int len=strlen(a);
		//temp1=a;temp2=b;
		//while(temp1!=0 || temp2!=0)
		for(long long int i=0;i<len;i++)
		{
			//n1=temp1%10;
			n1=a[i];
			//n2=temp2%10;
			n2=b[i];
			if(n1=='1' && n2=='0')
				n3++;
			else if(n1=='0' && n2=='1')
				n4++;
			
			
			if(n1=='1')
				x++;
			else
				y++;
		//	temp1/=10;
		//	temp2/=10;
		}
		if(x==0 || y==0)
			cout<<"Unlucky Chef"<<endl;
		else 
		{
			cout<<"Lucky Chef"<<endl;
			cout<<max(n3,n4)<<endl;
		}
	}
}
