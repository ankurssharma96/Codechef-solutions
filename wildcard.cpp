#include<iostream>	
#include<string.h>
#include<stdio.h>
using namespace std;

class test
{
	public:
	char S1[101],S2[101];
	int temp,i;	

	void input(char a[101],char b[101]);
	void check();	
};

void test::input(char a[101],char b[101])
{
	strcpy(S1,a);
	strcpy(S2,b);
	temp=1;
}
	
void test::check()
{
	if(strlen(S1)==strlen(S2))
	{
		i=0;
		while(!S1[i]=='\0')
		{
			if(S1[i]!='?' && S2[i]!='?' && S1[i]!=S2[i])
			{
				temp=0;
			}
			i++;
		}
	}
	else 
	temp=0;

}

int main()
{
//	cout<<"Enter no. of test cases: \n";
	int num;
	cin>>num;
	char S1[101],S2[101];	

	string s[num]="Yes";
	
	test t[num];
	for(int i=0;i<num;i++)
	{
//		cout<<"\nEnter the 2 strings:\n";
		cin>>S1;
		cin>>S2;
	
		t[i].input(S1,S2);
		t[i].check();
		
		if(t[i].temp==0)
		s[i]="No";
	}
	
	for(int i=0;i<num;i++)
	{
		cout<<s[i]<<endl;
	}
}
