#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll int t,i,c,h,m;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        c=0;
        for(i=0;i<10;i++)
            if(i<h&&i<m)
                c++;
		
        for(i=1;i<10;i++)
		{
            if(i<h&&(10*i+i)<m)
                c++;
            if((10*i+i)<h&&i<m)
				c++;
            if((10*i+i)<h&&(10*i+i)<m)
                c++;
        }
        cout<<c<<endl;
    }
}
