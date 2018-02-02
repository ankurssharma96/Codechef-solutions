#include<iostream>
#include<math.h>
#define ld long double
#define ll long long int 
ld intlog(ld base,ld x) {
    return (log(x) / log(base));
}
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ld n;
		ll count=0;
		ll sum=0;
		cin>>n;
		for(ld i=2;i<=n;i++){
			ld temp1=intlog(i,n);
			ld temp=temp1;
			temp=temp-(ll)temp;
			if(temp==0){
				count++;
				sum=sum+temp1+i;
			}
		}
		cout<<count<<endl;
		cout<<sum<<endl;
	}
}
