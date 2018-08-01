#include<bits/stdc++.h>
using namespace std;
bool vis[1001];
vector<int> g[1001];
void bfs(int s,vector<int> adj[],bool vis[]){
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int s=q.front();
		q.pop();
		if(!vis[s]){
			cout<<s<<" ";
			vis[s]=true;
			for(auto i=g[s].begin();i!=g[s].end();i++){
				q.push(*i);
			}
		}
	}
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(g,0,sizeof g);
        memset(vis,false,sizeof vis);
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
        }
        bfs(1,g,vis);
        cout<<endl;
    }
}


