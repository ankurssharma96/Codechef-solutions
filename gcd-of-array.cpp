#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=a[0];
        for(int i=1;i<n;i++)
            res=gcd(res,a[i]);
        cout<<res<<endl;
    }
	return 0;
}
