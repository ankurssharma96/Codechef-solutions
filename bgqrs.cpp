#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int ans,n,m,i,j,l,r,x,y;
		ans=0;
		scanf("%lld",&n);
		scanf("%lld",&m);
		long long int a[n];
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		long long int b[m];
		for(i=0;i<m;i++){
			scanf("%lld",&b[i]);
			if(b[i]==1){
				scanf("%lld",&l);
				scanf("%lld",&r);
				scanf("%lld",&x);
				for(j=l-1;j<r;j++){
					a[j]=a[j]*x;
				}
			}
			else if(b[i]==2){
				scanf("%lld",&l);
				scanf("%lld",&r);
				scanf("%lld",&y);
				int ctr=1;
				for(j=l-1;j<r;j++){
					a[j]=ctr*y;
					ctr++;
				}
			}
			else if(b[i]==3){
				scanf("%lld",&l);
				scanf("%lld",&r);
				long long int two=0,five=0;
				int prod=1;
				for(j=l-1;j<r;j++){
					prod=a[j];
					while((prod%2)==0){
						two++;
						prod=prod/2;
					}
					while((prod%5)==0){
						five++;
						prod=prod/5;
					}
				}
				ans=ans+min(two,five);
			}
		}
		printf("%lld\n",ans);			
	}
}
