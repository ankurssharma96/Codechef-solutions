#include<bits/stdc++.h>
using namespace std;


int getRandom(int x, int y)
{
    srand(time(NULL));
    return (x + rand() % (y-x+1));
}
/*int bin_search(int a[],int l,int r,int k)
{
	while(l<r){
		//int m=(l+r)/2;
		int m=getRandom(l,r);
		if(a[m]==k){
			return m;
		}
		else if(a[m]>k){
			r=m;
		}
		else{
			l=m;
		}
	}
	return -1;
}/*/
int bin_search(int a[],int l,int r,int k)
{
	if(l<=r){
		int m=(l+r)/2;
		//int m=getRandom(l,r);
		if(a[m]==k){
			return m;
		}
		else if(a[m]>k){
			r=m-1;
			return bin_search(a,l,r,k);
		}
		else{
			l=m+1;
			return bin_search(a,l,r,k);
		}
	}
	return -1;
}

/*
int bin_search(int a[],int l,int r,int k)
{
	while(l<r){
		int m=(l+r)/2;
		if(a[m]==k){
			return m;
		}
		else if(a[m]>k){
			r=m;
		}
		else{
			l=m;
		}
	}
	return -1;
}*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        cout<<found<<endl;
    }
}


