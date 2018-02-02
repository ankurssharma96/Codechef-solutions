#include<iostream>
#include<string>
long long int sum=0;

long long int recur(const string& s,const string& f,long long int p){
	
	if(s.find(f,p+1)!=string::npos){
		
		recur(s,f,p+(s.find(f,p+1)));
		
		long long int pos=s.find(f,p+1);
		for(;;){
			pos=s.find(f,pos+1);
			if(pos!=string::npos){
				arr[temp]=pos;
				temp++;
			}
			else{
				break;
			}
		}	
	}
	else 
		return 0;
}
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int pos,temp,i=0;
		string s,f;
		temp=0;
		pos=-1;
		cin>>s>>f;
		long long int len=s.length();
		long long int len1=f.length();
		long long int arr[len];
		for(int i=0;i<len;i++){
			arr[i]=0;
		}
		for(;;){
			pos=s.find(f,pos+1);
			if(pos!=string::npos){
				arr[temp]=pos;
				temp++;
			}
			else{
				break;
			}
		}
		
		cout<<recur(s,f,-1);
	}
}

