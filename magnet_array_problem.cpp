#include<bits/stdc++.h>
#define ld double
using namespace std;

ld search(ld l,ld h,ld a[],int n){
    ld pre=0.0000000000001;
    ld force=0.0,m;
    m=(l+h)/2.0;
    for(int i=0;i<n;i++){
        force+=1.0/(m-a[i]);
    }
    if(abs(force)<pre)
        return m;
    if(force>0)
        return search(m,h,a,n);
    else
        return search(l,m,a,n);
}
int main()
 {
 	cout<<fixed;
	cout<<setprecision(2);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ld a[n];
        for(int i=0;i<n;i++)
        	cin>>a[i];
        for(int i=0;i<n-1;i++){
            cout<<search(a[i],a[i+1],a,n)<<" ";
        }
        cout<<endl;
    }
	return 0;
}
