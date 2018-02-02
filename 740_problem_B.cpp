#include<iostream>
using namespace std;
int main(){
	long long int n,m,i,j;
	cin>>n>>m;
	long long int a[n],sum,sum1=0;
	long long intj,l[m],r[m];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<m;i++){
		cin>>l[i]>>r[i];
	}
	
	for(i=0;i<m;i++){
		sum=0;
		for(j=l[i]-1;j<r[i];j++){
			sum=sum+a[j];
		}
		if(sum>0){
			sum1=sum1+sum;
		}
	}
	cout<<sum1;
}
