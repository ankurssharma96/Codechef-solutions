#include<iostream>
#include<vector>
#include<math.h>
#include<string.h>
using namespace std;
#define M 1000000007
void sieve(int n,vector<int> &v){
    int i,j;
    bool ar[50000];
	memset(ar,true,sizeof(ar));
    for(i=2;i*i<=n;i++){
        if(ar[i]==true){
            for(j=2*i;j<=n;j+=i)
                ar[j]=false;
        }
    }
    for(i=2;i<=n;i++){
        if(ar[i]==true)
            v.push_back(i);
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r,i,j,lowlimit;
		cin>>l>>r;
		int k=sqrt(r);
		vector<int> v;
		sieve(k,v);
		long long int ans=1;
		bool ar[1000000];
		memset(ar,true,sizeof(ar));
		for(i=0;i<v.size();i++){
			if(l>=v[i]){
				lowlimit=(l/v[i])*v[i];
				if(lowlimit<l)
				lowlimit+=v[i];
			}
			else
				lowlimit=v[i]*2;
			for(j=lowlimit;j<=r;j+=v[i]){
				ar[j-l]=false;
			}
		}
		for(j=l;j<=r;j++){
			if(ar[j-l])
				ans=(ans*j)%M;
		}
		cout<<ans<<endl;
	}
	return 0;
}
