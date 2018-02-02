#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,ds,dt;
		cin>>ds>>dt>>d;
		int res[4];
		res[0]=0;
		res[1]=d-ds-dt;
		res[2]=ds-d-dt;
		res[3]=dt-d-ds;
		sort(res,res+4);
		
		cout<<fixed<<setprecision(7)<<(double)res[3]<<endl;
		
	}
}
