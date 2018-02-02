#include<iostream>	
#include<stdio.h>
#include<string.h>
using namespace std;

class test
{
	public:
	string s;
	int temp[50];
	int max;
	string res;
	void input(string a);
	void check();
};

void test::input(string a)
{
	s=a;
	for(int i=0;i<50;i++)
	temp[i]=0;
}
void test::check()
{
	int i=0;
	while(s[i]!='\0')
	{	int j=i;
		while(s[j]!='\0')
		{
			if(s[j]==s[i])
			temp[i]++;
			j++;
		}
		i++;
	}
	max=temp[0];
	for(int i=0;i<49;i++)
	{
		if(temp[i+1]>max)
		{
			max=temp[i+1];
		}
	}
	if(i==2*(max))
	res="Yes";
	else
	res="No";
}


int main()
{
//	cout<<"Enter no. of test cases: \n";
	long long int num;
	cin>>num;
	test t[num];
	string s;
	string res[num];
	for(long long int i=0;i<num;i++)
	{
		cout<<"Please input the string:\n";
		cin>>s;
		t[i].input(s);
		t[i].check();
		res[i]=t[i].res;
	}
	for(long long int i=0;i<num;i++)
	{
		cout<<res[i]<<"\n";
	}
}
