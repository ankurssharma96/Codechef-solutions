#include<iostream>	
#include<stdio.h>
using namespace std;

class test
{
	public:
		int M,x,y;
		int hou[100];
		int min,max;
	
		void input(int,int,int);
		int arr1[10];
		int prod;
		
		void check();
		int res;
};
void test::input(int a, int b, int c)
{
	M=a;
	x=b;
	y=c;
	
	min=max=0;
	prod=x*y;
	res=0;
	
	for(int i=0;i<100;i++)
	{
		hou[i]=0;
	}
	
//	cout<<"\nEnter the M house numbers:";
	for(int i=0;i<M;i++)
	{
		cin>>arr1[i];
	}
	
}

void test::check()
{

	for(int i=0;i<M;i++)
	{
		min=arr1[i]-prod-1;
		max=arr1[i]+prod-1;
		
		if(min<0)
		min=0;
		if(max>99)
		max=100;
		
		for(int i=min;i<max+1;i++)
		{
			hou[i]=1;
		}
	}
	for(int i=0;i<100;i++)
	{
		if(hou[i]==0)
		{
			res++;
		}
	}
}

int main()
{
//	cout<<"Enter no. of test cases: \n";
	unsigned long int num;
	cin>>num;

	test t[num];
	int M,x,y;
	int res[num];
	
	for(int i=0;i<num;i++)
	{
//		cout<<"\nEnter the values for M,x,y:\n";
		cin>>M>>x>>y;
		t[i].input(M,x,y);
		t[i].check();
		res[i]=t[i].res;
	}
	for(int i=0;i<num;i++)
	{
		cout<<"\n"<<res[i];
	}

}
