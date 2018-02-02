#include<iostream>
using namespace std;
int main(){
	long long int n,h,i,comm,p,pos;
	p=0;
	pos=0;
	cin>>n>>h;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	do{
		cin>>comm;
		switch(comm){
			case 1:	{
				if(pos>0){
					pos=pos-1;
				}
				break;
			}
			case 2:	{
				if(pos<(n-1)){
					pos=pos+1;
				}
				break;
			}
			case 3: {
				if(p==0 && a[pos]>0){
					a[pos]-=1;
					p=1;
				}
				break;
			}
			case 4:	{
				if(p==1 && a[pos]<h){
					p=0;
					a[pos]=a[pos]+1;
				}
				break;
			}
				
		}
	}while(comm);
	for(i=0;i<n;i++){
		cout<<a[i];
	}
}
