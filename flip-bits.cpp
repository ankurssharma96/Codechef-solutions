#include<iostream>
#include<limits.h>
using namespace std;

int fun(int n,int *a){
	int l=0,r=0;
	int ze=0,on=0;
	int mx=INT_MIN;
	int ind,len;
	for(r=0;r<n;r++){
		if(a[r]==0){
			ze++;
		}
		else if(a[r]==1){
			on++;
		}
		int diff=ze-on;
		if(diff>mx){
			mx=diff;
			len=r-l+1;
			ind=l;
		}
		while(diff<0 && l<=r){
			if(a[l]==0){
				ze--;
				diff=ze-on;
			}
			else if(a[l]==1){
				on--;
				diff=ze-on;
			}
			l++;
		}
		if(diff>mx){
			mx=diff;
			len=r-l+1;
			ind=l;
		}
	}
	for(int i=ind;i<ind+len;i++){
		if(a[i]==0)
			a[i]=1;
		else if(a[i]==1)
			a[i]=0;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]==1)
			cnt++;
	}
	return cnt;
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
		cout<<fun(n,a)<<endl;
		
	}
}
