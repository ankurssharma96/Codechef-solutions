#include<iostream>	
#include<string.h>
#include<stdio.h>
using namespace std;

class test
{
	public:
		int A,B;
		int temp;

	void input(int,int);
	void check();	
};

void test::input(int a,int b)
{
	A=a;
	B=b;
	temp=0;
}
	
void test::check()
{
	if(A>B)
	temp=1;
	else if(A<B)
	temp=2;
	else if(A=B)
	temp=3;
}

int main()
{
//	cout<<"Enter no. of test cases: \n";
	int num;
	cin>>num;
	int A,B;
	int res[num];
	test t[num];
	for(int i=0;i<num;i++)
	{
		cin>>A>>B;
		t[i].input(A,B);
		t[i].check();
		res[i]=t[i].temp;
	}
	
	for(int i=0;i<num;i++)
	{
		if(res[i]==1)
		cout<<">"<<endl;
		else if(res[i]==2)
		cout<<"<"<<endl;
		else
		cout<<"="<<endl;
	}
}
