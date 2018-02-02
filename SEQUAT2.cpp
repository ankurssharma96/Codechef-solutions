#include<iostream>
using namespace std;
int main(){
	long long int t,i,j,a,b,c,n,X,Y;
	cin>>t;
	long long int x[100001],y[100001];

	while(t--){
		X=0;Y=0;
		for(i=0;i<100001;i++){
			x[i]=0;y[i]=0;
		}
		cin>>a>>b>>c>>n;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if((i*j)==(i|j)*(i&j)+(a*i+(b*j)+c)){
					x[i]=1;
					y[j]=1;
					cout<<i<<" "<<j<<endl;
				}
			}
		}
		for(i=1;i<=n;i++){
			if(x[i]==1){
				X=X+i;
			}
			if(y[i]==1){
				Y=Y+i;
			}
		}
		//cout<<X<<" "<<Y<<endl;
	}
}
