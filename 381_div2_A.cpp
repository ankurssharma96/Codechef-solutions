#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long int n,a,b,c,t,m1,m2,m3,temp=0;
	cin>>n>>a>>b>>c;
	long long int e1[]={a,(b+c),(3*c)};
	sort(e1,e1+3);
	long long int e2[]={(2*a),b,(2*c)};
	sort(e2,e2+3);
	long long int e3[]={(3*a),(a+b),c};
	sort(e3,e3+3);
	t=n%4;
	t=4-t;
	if(t==4){
		cout<<"0";
	}
	else if(t==1){
		cout<<e1[0];
	}
	else if(t==2){
		cout<<e2[0];
	}
	else if(t==3){
		cout<<e3[0];
	}
}
