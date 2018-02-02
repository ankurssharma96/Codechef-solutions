#include<iostream>
using namespace std;
int main(){
	long long int k2,k3,k5,k6,min1,min2,sum;
	cin>>k2>>k3>>k5>>k6;
	sum=0;
	
	min1=k2;
	if(k5<min1){
		min1=k5;
	}
	else if(k6<min1){
		min1=k6;
	}
	
	min2=k2-min1;
	if(k3<min2){
		min2=k3;
	}
	sum=(256*min1)+(32*min2);
	cout<<sum;
}
