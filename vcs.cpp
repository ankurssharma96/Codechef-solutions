#include<iostream>	
#include<stdio.h>
using namespace std;

class test
{
	public:
	int tot,ign,tra;
	int res1,res2;
	
	int arr1[100];
	int arr2[100];
	int arr3[100];
		
	void input(int,int,int);
	void check(int,int,int);	
};

void test::input(int tot,int ign,int tra)
{
		res1=res2=0;
		for(int i=0;i<tot;i++)
		{
			arr3[i]=i+1;
		}
	
	//	cout<<"Input integers of sequence A:\n";
		for(int i=0;i<ign;i++)
		{
			cin>>arr1[i];
		}
		
	//	cout<<"Input integers of sequence B:\n";
		for(int i=0;i<tra;i++)
		{
			cin>>arr2[i];
		}
}
	
void test::check(int tot,int ign,int tra)
{
	for (int i=0;i<ign;i++)
	{
		for (int j=0;j<tra;j++)
		{
			if (arr1[i]==arr2[j])
			res1++;
		}	
	}
	
	for (int i=0;i<tot;i++)
	{
		int temp2=0;
		for(int j=0;j<ign;j++)
		{
			if(arr3[i]==arr1[j])
			temp2++;
		}
	
		for(int j=0;j<tra;j++)
		{
			if(arr3[i]==arr2[j])
			temp2++;
		}
		if(temp2==0)
		res2++;
	}
	
}

int main()
{
//	cout<<"Enter no. of test cases: \n";
	int num;
	cin>>num;
	int tot,ign,tra;
	
	int res[num][2];
	
	test t[num];
	for(int i=0;i<num;i++)
	{
//		cout<<"Input the no of total, ignored and tracked source files: \n";
		cin>>tot>>ign>>tra;
	
		t[i].input(tot,ign,tra);
		t[i].check(tot,ign,tra);
		res[i][0]=t[i].res1;
		res[i][1]=t[i].res2;
	}
	
	for(int i=0;i<num;i++)
	{
		cout<<"\n"<<res[i][0]<<" "<<res[i][1];
	}
}
