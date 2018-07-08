#include <bits/stdc++.h>
using namespace std;


void countDistinct(int a[], int k, int n)
{
	int distinct=0;
    int cnt[101];
    memset(cnt,0,sizeof(cnt));
    
    for(int i=0;i<k;i++){
    	if(cnt[a[i]-1]==0){
    		distinct++;
		}
    	cnt[a[i]-1]++;
	}
	cout<<distinct<<" ";
    
    for(int i=1;i<=n-k;i++){
    	cnt[a[i-1]-1]--;
    	if(cnt[a[i-1]-1]==0){
    		distinct--;
		}
		if(cnt[a[i+k-1]-1]==0){
			distinct++;
		}
		cnt[a[i+k-1]-1]++;
		cout<<distinct<<" ";
	}
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}


