#include<iostream>
using namespace std;
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m;
		cin>>a>>m;
		int temp=gcd(a,m);
		if(temp==1){
			for(int i=0;i<m;i++){
				if((a*i)%m==1){
					cout<<i<<endl;
					break;
				}
			}
		}
		else{
			cout<<"-1"<<endl;
		}
	}
}
