#include<iostream>
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
	int n,k,i,j;
        cin>>n>>k;
	if(k==1){cout<<n<<endl;}
	else if(2*k>n){cout<<"-1"<<endl;}
	else if(2*k<=n && k!=1)
	{
	  for(i=1;i<=k;i++)
	  	cout<<(2*i)<<" ";
	  cout<<endl;
	}
	
  }
 
}
