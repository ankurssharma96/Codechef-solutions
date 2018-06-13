#include<bits/stdc++.h>
using namespace std;
 #define MAX 10001


void dfs_rev(int i,bool visited[], vector<int> v[100001], int N, int M, stack<int> st){
	visited[i]=true;
	for(int k=0;k<v[i].size();k++){
		if(!visited[v[i][k]])
			dfs_rev(v[i][k],visited,v,N,M,st);
	}
	
	
	/*
	vector<int>::iterator it;
	for(it=v[i].begin();it!=v[i].end();it++){
		if(!visited[*it]){
			dfs_rev(*it,visited,v,N,M,st);
		}
	}*/
}



void dfs(int i,bool visited[], vector<int> v[100001], int N, int M, stack<int>& st){
	visited[i]=true;
	for(int k=0;k<v[i].size();k++){
		if(!visited[v[i][k]])
			dfs(v[i][k],visited,v,N,M,st);
	}
	
	/*
	vector<int>::iterator it;
	for(it=v[i].begin();it!=v[i].end();it++){
		if(!visited[*it]){
			dfs(*it,visited,v,N,M,st);
		}
	}*/
	st.push(i);
}

int kosaraju(vector<int> v[100001], int N, int M)
{
    // Your code here
    bool *visited=new bool[N+1];
    for(int i=1;i<=N;i++)
    	visited[i]=false;
    int ctr=0;
    stack<int> st;
	for(int i=1;i<=N;i++){
		if(!visited[i]){
			dfs(i,visited,v,N,M,st);
		}
	}
	
	vector<int> rev[100001];
	for(int i=1;i<N+1;i++){
		for(int j=0;j<v[i].size();j++){
		   rev[v[i][j]].push_back(i);
		}
	}
	
	
	/*
	vector<int>::iterator it;
	for(int i=1;i<=N;i++){
		for(it=v[i].begin();it!=v[i].end();it++){
			rev[*it].push_back(i);
		}
	}*/
	
	for(int i=1;i<=N;i++)
    	visited[i]=false;
	while(!st.empty()){
		int n=st.top();
		st.pop();
		if(!visited[n]){
			dfs_rev(n,visited,rev,N,M,st);
			ctr++;
		}
	}
	return ctr;
}




int main()
{ 
   int t;
   cin>>t;
  while(t--)
   {   vector<int> v[100001];
        int a,b ;
   	cin>>a>>b;
       for(int i=0;i<b;i++)
           {  int m,n;
               cin>>m>>n;
               v[m].push_back(n);
           }
      
         
         int ans=kosaraju(v,a,b); 
         cout<<ans<<endl;
         for(int i=0;i<=a+1;i++)
        {    v[i].clear();   
         }
           
   }
return 0;
}


