#include<iostream>
#include<map>
#define ll long long int
using namespace std;
map<string,ll> mmap;
map<string,ll>::iterator it;
ll count=0;

void fun(string num){
	if(num.length()==0){
		count++;
		return;
	}
	else{/*
		if(num[0]=='0'){
		//	cout<<"\t"<<num<<endl;
			fun(num.substr(1));
		}
		else{*/
			it=mmap.find(num);
			if(it!=mmap.end()){
				count+=it->second;
				return;
			}
			int temp=(num[0]-48)*10+num[1]-48;
			int temp1=num[0]-48;
			if(num.length()>=2 && temp<=26 && temp1 && temp%10){
				fun(num.substr(1));
				fun(num.substr(2));
			}
			else if(num.length()>=2 && temp<=26 && temp1 && temp%10==0){
				ll i=1;
				while(num[i]=='0' && i<num.length()){
					i++;
				}
				fun(num.substr(i));
			}
			else if(num.length()>=2 && temp>26 && temp1 && temp%10==0){
				ll i=1;
				while(num[i]=='0' && i<num.length()){
					i++;
				}
				fun(num.substr(i));
			}		
			else if(temp1)
				fun(num.substr(1));
				
			mmap.insert(make_pair(num,count));
			//cout<<num<<"\t"<<count<<endl;
		}			
	//}
	return ;
}

int main(){
	string num;
	cin>>num;
	while(num!="0"){
		count=0;
		fun(num);
		cout<<count<<endl;
		cin>>num;
	}
}
