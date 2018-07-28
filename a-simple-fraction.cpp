#include<iostream>
#include<unordered_map>
#include<vector>
#include<sstream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int whole=n/d;
		int flag=0;		//0 if decimal part exist
		int flag1=0;	//0 if repeating decimal
		if(n%d==0){
			flag=1;
		}
		unordered_map<int,int> s;
		vector<int> v;
		int pos=0;		//to get position of '('
		while(s.find(n%d)==s.end()){
			s[n%d]=pos++;
			n=(n%d)*10;
			v.push_back(n/d);
		}
		if(n==0 && !flag)
			flag1=1;
		pos=s.find(n%d)->second;
	
		stringstream ss;
		ss<<whole;
		string res;
		ss>>res;
		if(!flag && !flag1){
			
			res+=".";
			for(int i=0;i<v.size();i++){
				if(pos==i){
					res=res+"(";	
				}
				res+=v[i]+'0';
			}
			res+=")";
		}
		else if(flag1){
			res=res+".";
			for(int i=0;i<v.size()-1;i++){
				res+=v[i]+'0';
			}
		}	
		cout<<res<<endl;
	}
}
