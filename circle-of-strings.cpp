#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void dfs(int s,vector<int>g[],vector<bool> &visited){
    visited[s] = true;
    for(auto i = g[s].begin();i!=g[s].end();i++){
        if(!visited[*i]){
            dfs(*i,g,visited);
        }
    }
}

bool isconnected(int s,vector<bool> &mark,vector<int>g[]){
    vector<bool>visited(26,false);
    dfs(s,g,visited);
    for(int i = 0;i<26;i++){
        if(mark[i]==1 && visited[i]==0){
            return false;
        }   
    }
    return true;
}

bool ispossible(string s[],int n){
    vector<int> g[26];
    vector<bool> mark(26,false);
    vector<int>in(26,0),out(26,0);
    
    for(int i = 0;i<n;i++){
        int f = s[i].front() - 'a';
        int l = s[i].back() - 'a';
        
        in[f]++;
        out[l]++;
        mark[f] = mark[l] = true;
        g[f].push_back(l);
        
    }
    for(int i=0;i<26;i++){
        if(in[i]!=out[i]){
            return false;
        }
    }
    return isconnected(s[0].front()-'a',mark,g);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	    cin >> n;
	    string s[n];
	    for(int i=0;i<n;i++){
	        cin >> s[i];
	    }
	    if(ispossible(s,n))
	    	cout<<"1"<<endl;
	    else
	    	cout<<"0"<<endl;
	}
	return 0;
}
