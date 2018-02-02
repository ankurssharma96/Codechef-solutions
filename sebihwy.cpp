#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		double s,sg,fg,d,t;
		cin>>s>>sg>>fg>>d>>t;
		double time,speed,dist,g1,g2;
		speed= s + (d*50*3600)/(1000*t);
		g1=(speed-sg);
		if(g1<0){
			g1=g1*(-1);
		}
		g2=(speed-fg);
		if(g2<0){
			g2=g2*(-1);
		}
		if(g1<g2){
			cout<<"SEBI"<<endl;
		}
		if(g2<g1){
			cout<<"FATHER"<<endl;
		}
		if(g1==g2){
			cout<<"DRAW"<<endl;
		}
	}
}
