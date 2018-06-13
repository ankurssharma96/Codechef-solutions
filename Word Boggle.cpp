#include<iostream>
#include<limits.h>
#include<set>
using namespace std;
char a[10][10];
int b[10][10];
int flag=0;
int flag1=0;

void fun(string st,int count,int n,int m,int i,int j){
	b[i][j]=1;
	if(count==st.length()){
		flag=1;
		return;
	}
	int y[8]={j-1,j-1,j-1,j,j,j+1,j+1,j+1};
	int x[8]={i-1,i,i+1,i-1,i+1,i-1,i,i+1}; 
	for(int p=0;p<8;p++){
		if(x[p]>=1 && x[p]<=n && y[p]>=1 && y[p]<=m){
			if(b[x[p]][y[p]]==0 && a[x[p]][y[p]]==st[count])
				fun(st,count+1,n,m,x[p],y[p]);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		flag1=0;
		int x;
		cin>>x;
		set<string> s;
		set<string>::iterator it;
		for(int i=0;i<x;i++){
			string st;
			cin>>st;
			s.insert(st);
		}

		int n,m;
		cin>>n>>m;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				a[i][j]='#';
				b[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		
		
		for(it=s.begin();it!=s.end();it++){
			string st=*it;
			flag=0;
					
			
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					if(a[i][j]==st[0]){
						for(int p=0;p<10;p++){
							for(int q=0;q<10;q++){
								b[p][q]=0;
							}
						}
						fun(st,1,n,m,i,j);
					}
				}
			}			
	
			if(flag==1){
				flag1=1;
				cout<<st<<" ";
			}
		}
		if(flag1==0){
			cout<<"-1"<<endl;
		}
		else
			cout<<endl;
	}
}
