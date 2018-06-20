#include<iostream>
using namespace std;

int fun(string str1,string str2,int p,int q){
	int l[p+1][q+1];
	for(int i=0;i<=p;i++){
		for(int j=0;j<=q;j++){
			if(i==0)
				l[i][j]=j;
			else if(j==0)
				l[i][j]=i;
			else if(str1[i-1]==str2[j-1])
				l[i][j]=l[i-1][j-1];
			else
				l[i][j]=1+min(min(l[i-1][j],l[i][j-1]),l[i-1][j-1]);
		}
	}
	return l[p][q];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int p,q;
		cin>>p>>q;
		string str1,str2;
		cin>>str1>>str2;
		cout<<fun(str1,str2,p,q);
		//cout<<max(p,q)-lcs;
		cout<<endl;
	}
}
