#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int n,d,ctr=0;
	cin>>n;
	cin>>d;
	long int l[n];
	for(long int i=0;i<n;i++)
	cin>>l[i];
	sort(l,l+n);
	long int i=0;
	while(i+1<n)
	{
		if((l[i+1]-l[i]) <= d)
		{
			ctr++;
			i=i+2;
		}
		else
		i++;
	}
	cout<<ctr;
	
}
