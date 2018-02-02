#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,ctr,i,temp,t1,t2,t3,t4,m;
		cin>>n;
		ctr=0;
		m=1;
		i=1;
		while(m<=n){
			ctr=ctr+i;
			temp=m;
			t1=temp%10;
			temp=temp/10;
			t2=temp%10;
			temp=temp/10;
			t3=temp%10;
			temp=temp/10;
			t4=temp%10;
			temp=temp/10;
			if((m%9)==0 || t1==9 || t2==9 || t3==9 || t4==9){
				i=i*(-1);
			}
			if(ctr==0 && i==(-1)){
				ctr=1001;
			}
			if(ctr==1002 && i==1){
				ctr=1;
			}
			m++;
		}
		cout<<ctr<<endl;
	}
}
