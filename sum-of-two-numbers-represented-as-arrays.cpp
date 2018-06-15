#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>m>>n;
		int a1[m];
		int a2[n];
		for(int i=0;i<m;i++){
			cin>>a1[i];
		}
		for(int i=0;i<n;i++){
			cin>>a2[i];
		}
		int len=max(m,n);
		int temp=len;
		int b[len+1];
		int flag=0;
		int i=m-1;
		int j=n-1;
		while(i>=0 && j>=0){
			if(flag==1)
				b[len]=a1[i]+a2[j]+1;
			else
				b[len]=a1[i]+a2[j];
			
			
			flag=b[len]/10;
			b[len]=b[len]%10;
			len--;i--;j--;
		}
		while(i>=0){
			if(flag==1)
				b[len]=a1[i]+1;
			else
				b[len]=a1[i];
			
			flag=b[len]/10;
			b[len]=b[len]%10;
			len--;i--;
		}
		while(j>=0){
			if(flag==1)
				b[len]=a2[j]+1;
			else
				b[len]=a2[j];
			
			flag=b[len]/10;
			b[len]=b[len]%10;
			len--;j--;
		}
		if(flag==1){
			cout<<"1 ";
		}
		for(int i=1;i<=temp;i++)
			cout<<b[i]<<" ";
		
		cout<<endl;		
	}
}
