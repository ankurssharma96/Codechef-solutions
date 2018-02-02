#include<iostream>
using namespace std;


int main(){
	unsigned long long int T;
	cin>>T;
	while(T--){
		unsigned long long int N,X;
		cin>>N>>X;
		if(N%X)
			cout<<N%X<<endl;
		else
			cout<<X<<endl;
	}
}
