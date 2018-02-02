#include<iostream>
#include<string>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,m,i,j,flag=0;
		cin>>n>>m;
		string res[n];
		for(i=0;i<n;i++){
			cin>>res[i];
		}
		for(i=0;i<n;i++){
			if(res[i][0]=='W' || res[i][m-1]=='W')
	    	{
	    		flag=1;
	    		goto mark;
			}
			size_t found=res[i].find("AW");
			size_t found1=res[i].find("WA");
			if (found!=string::npos || found1!=string::npos)
	    	{
	    		flag=1;
	    		goto mark;
			}
		}
		for(j=0;j<m;j++){
			for(i=0;i<n-1;i++){
				if(res[i][j]=='B' && res[i+1][j]=='A'){
					flag=1;
					goto mark;
				}
				if(res[i][j]=='B' && res[i+1][j]=='W'){
					flag=1;
					goto mark;
				}
				if(res[i][j]=='W' && res[i+1][j]=='A'){
					flag=1;
					goto mark;
				}
			}
		}	
		mark:
		if(flag==1){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
}
