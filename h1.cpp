#include<iostream>
using namespace std;

int prime(int num)
{
	int temp=1;
	for(int i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			temp=0;
			return 0;
		}
	}
	return temp;
}

int main()
{
	int t;
	cin>>t;
	int mat[3][3];
	while(t--)
	{
		int temp2=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			cin>>mat[i][j];
		}
		int t=3;
		
		while(t--)
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<3;j++)
				{
					int sum=mat[i][j]+mat[i+1][j];
					if(prime(sum) && mat[i][j]>mat[i+1][j])
					{
						int temp1=mat[i][j];
						mat[i][j]=mat[i+1][j];
						mat[i+1][j]=temp1;
						temp2++;
					}
				}
			}
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<2;j++)
				{
					int sum=mat[i][j]+mat[i][j+1];
					if(prime(sum) && mat[i][j]>mat[i][j+1])
					{
						int temp1=mat[i][j];
						mat[i][j]=mat[i][j+1];
						mat[i][j+1]=temp1;
						temp2++;
					}			
				}
			}
		}
	
		cout<<endl;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<mat[i][j];
				cout<<" ";
			}
			cout<<endl;
			
		}
		cout<<temp2;
		
	}
}
