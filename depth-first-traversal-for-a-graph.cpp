#include<bits/stdc++.h>
using namespace std;

/* You have to complete this function
which prints out the depth first level traversal of the 
graph starting from node s
the vector<int> g[i] represent the adjacency 
list of the ith node of the graph
 */
 
void dfs(int s, vector<int> g[], bool vis[]){
	stack<int> st;
	st.push(s);
	
	while(!st.empty()){
		int s=st.top();
		st.pop();
		if(!vis[s]){
			vis[s]=true;
			cout<<s<<" ";
			for (auto i = g[s].begin(); i != g[s].end(); ++i)
                st.push(*i);
		}	
	}
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        bool vis[1001];
		vector<int> g[1001];
        memset(g,0,sizeof g);
        memset(vis,false,sizeof vis);
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cout<<"work";
        dfs(1,g,vis);
        cout<<endl;
    }
}

