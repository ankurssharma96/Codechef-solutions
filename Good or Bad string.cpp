#include<iostream>

bool isVowel(char s){
	if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s=='?' )
		return true;
	else
		return false;
}
bool isConso(char s){
	if(s=='?')
		return true;
	if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u')
		return false;
	else
		return true;
}

using namespace std;
int main(){
	/*if(isConso('?'))
		cout<<"yes";*/
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int flag=0;
		for(int i=0;i<s.length();i++){
			if(isConso(s[i])){
				int temp=i+1;
				int count=1;
				//cout<<s[i]<<count<<endl;
				while(temp<s.length() && count!=4){
					if(isConso(s[temp])){
						count++;
					//	cout<<s[temp]<<count<<endl;
						temp++;
					}
					else
						goto tag1;
					
				}
				if(count==4){
					cout<<"0"<<endl;
					flag=1;
					goto tag;
				}
			}
			if(isVowel(s[i])){
				int temp=i+1;
				int count=1;
			//	cout<<s[i]<<count<<endl;
				while(temp<s.length() && count!=6){
					if(isVowel(s[temp])){
						count++;
//						cout<<s[temp]<<count<<endl;
						temp++;
					}
					else
						goto tag1;
				}
				if(count==6){
					cout<<"0"<<endl;
					flag=1;
					goto tag;
				}	
			}
			
			tag1:
				int p;
		}
		if(flag==0)
			cout<<"1"<<endl;
		tag:
			int q;		
	}
}
