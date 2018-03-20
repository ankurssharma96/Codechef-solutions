#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int x,l,r,y,num=0,temp=0,diff;
		cin>>x>>l>>r>>y;
		diff=r-l+1;
		for(int i=0;i<diff;i++){
			temp+=pow(2,i);
			if(temp<0)
				break;
			num=temp;
		}
		diff=l-1;
		for(int i=0;i<diff;i++)
			num*=2;
		num=num&y;
		x=x|num;
		cout<<x<<endl;
	}
}
