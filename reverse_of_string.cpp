#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	map<int,string> mmap;
	map<int,string>::reverse_iterator rit;
	int i=0;
	int temp=0;
	int bl_st,bl_end,wo_st,wo_end;
	while(i<s.length()){
		
		if(s[i]==' '){
			bl_st=i;
			temp=0;
			while(s[i]==' '){
				temp++;
				i++;
			}
			
			bl_end=i-1;
			mmap.insert(make_pair(bl_st,s.substr(bl_st,temp)));
		}
		if(s[i]!=' '){
			wo_st=i;
			temp=0;
			
			while(s[i]!=' '){
				temp++;
				i++;
			}
			wo_end=i-1;
			mmap.insert(make_pair(wo_st,s.substr(wo_st,temp)));
		}
	}
	string t="";
	for (rit=mmap.rbegin(); rit!=mmap.rend(); ++rit){
		t=t+rit->second;
	}
	cout<<t;
}
