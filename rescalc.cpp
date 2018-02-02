#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,i,j;
		cin>>n;
		long long int ty[6];
		long long int c[n];
		long long int sum[n];
		for(i=0;i<n;i++){
			sum[i]=0;
		}
		
		for(i=0;i<n;i++){
			
			for(j=0;j<6;j++){
				ty[j]=0;
			}
			
			cin>>c[i];
			
			sum[i]=sum[i]+c[i];
			
			long long int type[c[i]];
			
			for(j=0;j<c[i];j++){
				cin>>type[j];
				ty[type[j]-1]++;
			}
			
			sort(ty,ty+6);
			sum[i]=sum[i]+(4*ty[0]);
			ty[2]=ty[2]-ty[0];
			ty[1]=ty[1]-ty[0];
			sum[i]=sum[i]+(2*ty[1]);
			ty[2]=ty[2]-ty[1];
			sum[i]=sum[i]+(1*ty[2]);			
			
		} 
		int max=sum[0];
		int ctr=0;
		for(i=0;i<n;i++){
			if(sum[i]>max){
				max=sum[i];
				ctr=i;
			}
		}
		sum[ctr]=-1;
		int flag=-1;
		
		for(i=0;i<n;i++){
			if(sum[i]==max){
				flag=1;
			}
		}
		if(flag==1){
			cout<<"tie"<<endl;
		}
		else if(ctr==0){
			cout<<"chef"<<endl;
		}
		else{
			cout<<ctr+1<<endl;
		}
	}
}
