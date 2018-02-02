#include<iostream>	
#include<string.h>
#include<stdio.h>
using namespace std;

class test
{
	public:
		long int A;
		float B;
		long int C;
		int temp;

	void input(long int,float,long int);
	void check();	
};

void test::input(long int a,float b,long int c)
{
	A=a;
	B=b;
	C=c;
	temp=0;
}
	
void test::check()
{
	if(A>50 && B<0.7 && C>5600)
	temp=10;
	else if(A>50 && B<0.7 && C<=5600)
	temp=9;
	else if(A<=50 && B<0.7 && C>5600)
	temp=10;
	else if(A>50 && B>=0.7 && C>5600)
	temp=7;
	else if((A>50 && B>=0.7 && C<=5600) || (A<=50 && B<0.7 && C<=5600) || (A<=50 && B>=0.7 && C>5600))
	temp=6;
	else if(A<=50 && B>=0.7 && C<=5600)
	temp=5;
}

int main()
{
//	cout<<"Enter no. of test cases: \n";
	long int num;
	cin>>num;
	long int A;
	float B;
	long int C;
	long int res[num];

	test t[num];
	for(int i=0;i<num;i++)
	{
		cin>>A>>B>>C;
		t[i].input(A,B,C);
		t[i].check();
		res[i]=t[i].temp;
	}
	
	for(long int i=0;i<num;i++)
	{
		switch(res[i])
		{
			case 10:cout<<"10"<<endl;break;
			case 9:cout<<"9"<<endl;break;
			case 8:cout<<"8"<<endl;break;
			case 7:cout<<"7"<<endl;break;
			case 6:cout<<"6"<<endl;break;
			case 5:cout<<"5"<<endl;break;
		}
	}
}
