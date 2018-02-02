#include<iostream>
#define M 1000000007
#define fun1(long long int a,long long int b,long long int c,long long int d,long long int *p)\
{\
	long long int i=0;	\
	if(a==1)\
	{\
		for(i=b;i<=c;i++)\
		{\
			p[i]+=d;\
			p[i]%=M;\
		}\
	}\
	else if(a==2)\
	{\
		for(i=b;i<=c;i++)\
		{\
			p[i]*=d;\
			p[i]%=M;\
		}\
	}\
	else if(a==3)\
	{\
		for(i=b;i<=c;i++)\
		{\
			p[i]=d;\
		}\
	}\
}

#define fun2(long long int a,long long int b,long long int c,long long int *p)\
{\
	long long int i,sum=0;\
	for(i=b;i<=c;i++)\
		{\
			sum+=p[i];\
			sum%=M;\
		}\
	return sum;\
}


using namespace std;

int main()
{
	long long int n,b,i=0;
	cin>>n>>b;
	long long int a[n+1];
	for(i=1;i<=n;i++)
		cin>>a[i];
	
	while(b--)
	{
		long long int p,q,r,s;
		cin>>p;
		if(p==4)
		{
			cin>>q>>r;	
			cout<<fun2(p,q,r,&a[0])<<endl;
		}
		else
		{
			cin>>q>>r>>s;
			fun1(p,q,r,s,&a[0]);
		}
			
	}
}
