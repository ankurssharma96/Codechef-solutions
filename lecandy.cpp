#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int N;
		long long int C;
		long long int sum=0;
		cin>>N>>C;
		long int arr[N];
		for(long long int i=0;i<N;i++)
		{
			cin>>arr[i];
			sum=sum+arr[i];
		}
		if(C>=sum){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}
}
