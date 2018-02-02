#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
long long int  gcd(long long int x, long long int y)
{
    if (y == 0) {
        return x;
    } else  {
        return gcd(y, (x % y));
    }
}
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,i,j,p,q,r,temp=0;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		long long int num=n*(n-1)/2;
		set<long long int>b;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				p=a[i];
				q=a[j];
			
				if(p==q){
					b.insert(p);
				}
				else{
					long long int prod=p*q;
					prod=prod/gcd(p,q);
					b.insert(prod);				
					}
				}
			}
		cout<<*b.begin()<<endl;
	}
}
