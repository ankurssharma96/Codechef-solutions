#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int c,d,l,max,min;
		cin>>c>>d>>l;
		max=c+d;
		if(c<=(2*d)){
			min=d;
		}
		else{
			min=d+(c-(2*d));
		}
		max*=4;
		min*=4;
		if(l<=max && l>=min && (l%4)==0){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}
