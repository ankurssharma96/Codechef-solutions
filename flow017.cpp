#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int A,B,C,max=0;
	while(t--)
	{
		cin>>A>>B>>C;
		if(A>max)
		max=A;
		if(B>max)
		max=B;
		if(C>max)
		max=C;
		
		if(max==A)
		{
			if(B>C)
			cout<<B<<endl;
			else
			cout<<C<<endl;
		}
		
		if(max==B)
		{
			if(A>C)
			cout<<A<<endl;
			else
			cout<<C<<endl;	
		}
	
		if(max==C)
		{
			if(B>A)
			cout<<B<<endl;
			else
			cout<<A<<endl;
		}
		
	}
	
}
