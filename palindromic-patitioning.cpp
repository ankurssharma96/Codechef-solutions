#include<iostream>
using namespace std;
bool isPalindrome(string s,int l,int r){
	while(l<r){
		if(s[l]==s[r]){
			l++;
			r--;
		}
		else{
			return false;
		}
	}
	return true;
}
int fun(string s,int l,int r){
	if(l==r){
		return 0;
	}
	if(isPalindrome(s,l,r)){
		return 0;
	}
	int min=INT_MAX;
	for(int i=l;i<=r-1;i++){
		int temp=fun(s,l,i)+1+fun(s,i+1,r);
		if(temp<min)
			min=temp;
	}
	return min;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<fun(s,0,s.length()-1)<<endl;
	}
}
