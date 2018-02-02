#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,m,temp=0,j=0;
		cin>>n>>m;
		long int a[m];
		for(long int i=0;i<m;i++)
		{
			cin>>a[i];
		}
		sort(a,a+m);
		long int i=1;
		while(a[m-1]!=n)
		{
			a[j]-=1;
			if(a[j]==0)
			j++;
			temp++;
			a[m-1]=a[m-1]+1+a[m-1-i];
			i++;
		}
		cout<<temp<<endl;
	}
}
