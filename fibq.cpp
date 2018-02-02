#include<iostream>
#include<math.h>
using namespace std;

unsigned long long int fib(unsigned long long int n)
{
	unsigned long long int i;
	unsigned long long int a[n+1];
	a[0]=0;a[1]=1;
	for(i=2;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
	return a[n];
}


unsigned long long int fun(unsigned long long int *set, unsigned long long int set_size)
{
    
	unsigned long long int pow_set_size = pow(2, set_size);
    unsigned long long int counter, j;
    unsigned long long int sum=0;
	unsigned long long int sum1=0;
    for(counter = 0; counter < pow_set_size; counter++)
    {
    	sum=0;
      	for(j = 0; j < set_size; j++)
       	{
       		if(counter & (1<<j))
       	    sum+=set[j];
       	}
       sum1+=fib(sum);
    }
    sum1=sum1%1000000007;
    return sum1;
}



int main()
{
	unsigned long long int n,m,i,l,r;
	cin>>n>>m;
	unsigned long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	char q[m];
	unsigned long long int q1[m],q2[m];
	
	for(i=0;i<m;i++)
	{
		cin>>q[i]>>q1[i]>>q2[i];	
	}
	
	for(i=0;i<m;i++)
	{
		if(q[i]=='C')
			a[q1[i]-1]=q2[i];
		
		else if(q[i]='Q')
		{
			cout<<fun(&a[q1[i]-1],q2[i]-q1[i]+1)<<endl;
		}
	}	
}
