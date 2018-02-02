#include<iostream>	
#include<string.h>
#include<stdio.h>
using namespace std;

class test
{
	public:
	char S1[101],S2[101];	
	int i,min,max,temp1,temp2,temp3;

	void input(char a[101],char b[101]);
	void check();	
};

void test::input(char a[101],char b[101])
{
	strcpy(S1,a);
	strcpy(S2,b);
	temp1=temp2=temp3=i=0;
}
	
void test::check()
{
	while(!S1[i]=='\0')
	{
		if(S1[i]=='?' || S2[i]=='?')
		temp1++;
		else if(S1[i]==S2[i])
		temp2++;
		else temp3++;	
		
		i++;
	}
	min=temp3;
	max=min+temp1;
}

int main()
{
//	cout<<"Enter no. of test cases: \n";
	int num;
	cin>>num;
	char S1[101],S2[101];
	int min[num],max[num];	
	
	test t[num];
	for(int i=0;i<num;i++)
	{
//		cout<<"\nEnter the 2 strings:\n";
		cin>>S1;
		cin>>S2;
	
		t[i].input(S1,S2);
		t[i].check();
		
		min[i]=t[i].min;
		max[i]=t[i].max;
	}
	
	for(int i=0;i<num;i++)
	{
		cout<<"\n"<<min[i]<<" "<<max[i];
	}
}
