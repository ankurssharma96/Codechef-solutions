#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,m,i,j,max,max2,ctr=0;
	long long int ctr1=0;
	cin>>n>>m;
	string str1[n],str2[n],str3[m];
	for(i=0;i<n;i++)
	{
		cin>>str1[i]>>str2[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>str3[i];
	}
		
	/*................*/
	long long int res1[n];
	for(i=0;i<n;i++)
	{
		res1[i]=0;
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		if(str3[i]==str1[j])
			res1[j]++;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str2[i]==str2[j])
				res1[i]+=res1[j];
		}
	}
	
	max2=res1[0];
	for(i=0;i<n;i++)
	{
		if(res1[i]>max2)
			max2=res1[i];
	}
	
	string re1[n];
	for(i=0;i<n;i++)
	{
		if(res1[i]==max2)
		{
			re1[ctr1]=str2[i];
			ctr1++;
		}
	}
	sort(re1,re1+ctr1);
	cout<<re1[0]<<endl;
	
	/*................*/
	long long int res[n];
	for(i=0;i<n;i++)
	{
		res[i]=0;
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		if(str3[i]==str1[j])
			res[j]++;
	}
	max=res[0];
	for(i=0;i<n;i++)
	{
		if(res[i]>max)
			max=res[i];
	}
	string re[n];
	for(i=0;i<n;i++)
	{
		if(res[i]==max)
		{
			re[ctr]=str1[i];
			ctr++;
		}
	}
	sort(re,re+ctr);
	cout<<re[0];
	
}
