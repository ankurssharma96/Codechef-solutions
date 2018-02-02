#include<iostream>
using namespace std;
void swap(char *x,char *y)
{
	char ch;
	ch=*x;
	*x=*y;
	*y=ch;
}

void permutation(char *s,int i,int n)
{
	static int count ;
	int j;
	if(i==n)
	{
		count++;
		cout<<count<<".";
		cout<<s<<endl;
		
	}
	else
	{
		for(j=i;j<=n;j++)
		{
			swap((s+i),(s+j));
			permutation(s,i+1,n);
			swap((s+i),(s+j));
		}
	}
}


int main()
{
	char *str;
	char ch[100];
	
	cout<<"Enter string: ";
	cin>>ch;
	str=ch;
	int i=0;
	while(ch[i]!='\0')
	{
		i++;
	}
	
	permutation(str,0,i-1);
}
