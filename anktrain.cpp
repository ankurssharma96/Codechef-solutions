#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int fac,mod;
		fac=n/8;
		mod=n%8;
		switch(mod){
			case 1:{
				cout<<(fac*8)+4<<"LB"<<endl;
				break;
			}
			case 2:{
				cout<<(fac*8)+5<<"MB"<<endl;
				break;
			}
			case 3:{
				cout<<(fac*8)+6<<"UB"<<endl;
				break;
			}
			case 4:{
				cout<<(fac*8)+1<<"LB"<<endl;
				break;
			}
			case 5:{
				cout<<(fac*8)+2<<"MB"<<endl;
				break;
			}
			case 6:{
				cout<<(fac*8)+3<<"UB"<<endl;
				break;
			}
			case 7:{
				cout<<(fac*8)+8<<"SU"<<endl;
				break;
			}
			case 0:{
				cout<<(fac*8)+7<<"SL"<<endl;
				break;
			}
		}
	}
}
