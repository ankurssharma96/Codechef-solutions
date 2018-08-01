#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<stdio.h>
 
using namespace std;

int fun(string s){
	int n=s.length();
	int curr_len=1;
	int max_len=1;
	int prev_index;
	int visited[256];
//	int *visited=new int[256];
	memset(visited,-1,sizeof(visited));
//	for (int i = 0; i < 256;  i++)
//    	visited[i] = -1;
    	
	visited[s[0]]=0;
	
	for(int i=1;i<n;i++){
		prev_index=visited[s[i]];
		if(prev_index==-1 || i - curr_len > prev_index){
			curr_len++;
		}
		else{
			if(curr_len>max_len){
				max_len=curr_len;
			}
			curr_len=i-prev_index;
		}
		visited[s[i]]=i;
	}
	if(curr_len>max_len){
		max_len=curr_len;
	}
//	free(visited);
	return max_len;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<fun(s)<<endl;
	}
}
