#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		char d[1000000];
		long long int temp,temp1;
		cin>>d;
		long long int i=0,j=0,k=0,l;
		temp=strlen(d);
		for(l=0;l<temp;l++){
			if(d[l]=='0'){
				i++;
			}
			else{
				j++;
			}
		}
		if((i==temp-1) || j==(temp-1)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}
