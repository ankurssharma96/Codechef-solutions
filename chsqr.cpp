#include<iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int i,j,k,h,h1,temp,temp1,temp2;
		cin>>k;
		h=k/2;
		temp=h;
		h1=h;
		long long int a[k][k];
		while(h>=0){
			
			a[h][temp-h]=1;
			temp2=h;
			temp1=2;
			while(temp1<=k){
				a[(++temp2)%k][temp-h]=temp1;
				temp1++;
			}											
			
			h--;
		}
		h=h1;
		temp=h;
		while(h>0){
			a[h+(k/2)][temp-h+1+k/2]=1;
			temp2=h+k/2;
			temp1=2;
			while(temp1<=k){
				a[(++temp2)%k][temp-h+1+k/2]=temp1;
				temp1++;
			}
			h--;
		}
		for(i=0;i<k;i++){
			for(j=0;j<k;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}	
		
	
	}
}
