#include<iostream>
using namespace std;
int main(){
	long long int n,i,a,d;
	cin>>n;
	a=0;d=0;
	string s;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='A'){
			a++;
		}
		else{
			d++;
		}
	}
	if(a>d){
		cout<<"Anton";
	}
	else if(d>a){
		cout<<"Danik";
	}
	else{
		cout<<"Friendship";
	}
}
