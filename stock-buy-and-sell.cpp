#include<iostream>
using namespace std;
int fun(int a[],int n){
	int start=0;
	int end=0;
	int flag=0;
	while(start<n-1){
		end=start;
		while(a[end+1]>a[end] && end<n-1){
			end++;
		}
		//cout<<endl<<start<<"\t"<<end;
		if((end-start)>0){
			flag=1;
			cout<<"("<<start<<" "<<end<<")"<<" ";
		}
		start=end+1;	
	}
	return flag;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int flag=fun(a,n);
		if(!flag)
			cout<<"No Profit";
		cout<<endl;
	}
}
