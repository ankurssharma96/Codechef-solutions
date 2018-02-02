#include<iostream>	
#include<stdio.h>
#include<math.h>
using namespace std;

class test
{
	public:
		unsigned long int L,R;
		void input(int,int);
		void check();
		unsigned long int num1,num2,temp1,temp2,sum;
};

void test::input(int a,int b)
{
	L=a;
	R=b;
	num1=num2=sum=temp2=temp1=0;
}
void test::check()
{
	for(num1=L;num1<=R;num1++)
	{
		temp1=num1;
		while(temp1)
		{
			temp2++;
			temp1=(temp1/10);
		}
		
		temp1=num1;
		for(unsigned long int i=temp2;i>0;--i)
		{
			num2=num2+(temp1%10)*(pow(10,(i-1)));
			temp1=temp1/10;
		}
		
		if(num2==num1)
		{
			sum=sum+num1;
		}
		temp2=num2=0;
	}
}


int main()
{
//	cout<<"Enter no. of test cases: \n";
	int num;
	cin>>num;
	test t[num];
	unsigned long int L,R;
	unsigned long int res[num];
	for(unsigned long int i=0;i<num;i++)
	{
//		cout<<"Enter the range: \n";
		cin>>L>>R;
		t[i].input(L,R);
		t[i].check();
	
		res[i]=t[i].sum;
	}
	for(int i=0;i<num;i++)
	{
		cout<<"\n"<<res[i];
	}
}
