#include<iostream>
#include<string>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int pos,temp,sum,i=0;
		string s,f;
		temp=0;
		pos=-1;
		sum=0;
		cin>>s>>f;
		long long int len=s.length();
		long long int l1=f.length();
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
		long long int b[temp];
		for(int i=0;i<temp;i++){
			b[i]=0;
		}
		for(i=0;i<temp;i++){
			pos=arr[i]+f.length()-1;
			for(;;){
				pos=s.find(f,pos+1);
				if(pos!=string::npos){
					b[i]++;
				}
				else{
					break;
				}
			}
			cout<<b[i];
		}
		sum=sum+temp;
		/*for(int i=0;i<temp;i++){
			pos=arr[i];
			while(pos!=string::npos)
		}*/
	}
}

