#include<iostream>
using namespace std;
/*
int fun(int i,int n,int w,int val[],int wt[]){
	if(i==n || w==0)
		return 0;
		
	int temp1=fun(i+1,n,w,val,wt);
	int temp2=0;
	if(w-wt[i]>=0)
		temp2=val[i]+fun(i+1,n,w-wt[i],val,wt);
		
	int sum=max(temp1,temp2);
	return sum;
}*/
/*
int fun(int W, int wt[], int val[], int n)
{
   if (n == 0 || W == 0)
       return 0;

   if (wt[n-1] > W)
       return fun(W, wt, val, n-1);
 
   else return max( val[n-1] + fun(W-wt[n-1], wt, val, n-1),fun(W, wt, val, n-1));
}*/
int fun(int W, int wt[], int val[], int n){
	int k[n+1][W+1];
	for(int i=0;i<=n;i++){
		for(int w=0;w<=W;w++){
			if(i==0 || w==0)
				k[i][w]=0;
			else if(w>=wt[i-1])
				k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]] , k[i-1][w]);
			else 
				k[i][w]=k[i-1][w];
		}
	}
	return k[n][W];	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int w;
		cin>>w;
		int val[n];
		int wt[n];
		for(int i=0;i<n;i++){
			
			
			cin>>val[i];
		}
		for(int i=0;i<n;i++){
			cin>>wt[i];
		}
		//cout<<fun(0,n,w,val,wt)<<endl;
		cout<<fun(w,wt,val,n)<<endl;
	}
}
