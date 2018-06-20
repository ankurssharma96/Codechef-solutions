#include<iostream>
using namespace std;
/*int fun(int i,int j,string str1,string str2,int a,int b){
	if(i==a || j==b)
		return 0;
	if(str1[i]==str2[j])
		return (1+fun(i+1,j+1,str1,str2,a,b));
	else
		return max(fun(i,j+1,str1,str2,a,b),fun(i+1,j,str1,str2,a,b));
}*/
int fun(int i,int j,string str1,string str2,int a,int b){
	int l[a+1][b+1];
	for(i=0;i<=a;i++){
		for(j=0;j<=b;j++){
			if(i==0 || j==0)
				l[i][j]=0;
			else if(str1[i-1]==str2[j-1])
				l[i][j]=1+l[i-1][j-1];
			else
				l[i][j]=max(l[i-1][j],l[i][j-1]);
		}
	}
	return l[a][b];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		string str1,str2;
		cin>>str1>>str2;
		cout<<fun(0,0,str1,str2,a,b)<<endl;
	}
}
