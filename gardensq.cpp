#include<iostream>
using namespace std;
#define min(i,j) i<j?i:j
int main()
{
	int t,n,m,temp=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		char a[n][m];
		for(int i=0;i<n;i++)
		{
            scanf("%s",a[i]);
		}
			
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if((i+j)<min(m,n) && (i+j)>0)
				{
					if(a[i][i]==a[i][i+j] && a[i][i+j]==a[i+j][i] && a[i+j][i]==a[i+j][i+j])
					temp++;		
				}
			}
		}
		cout<<temp<<endl;
		temp=0;
	}
}
