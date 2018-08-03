#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};
vector<int> g[100001];
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int _size,N;
        cin>>_size>>N;
        Graph *g = new Graph(_size);
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g->addEdge(u,v);
        }
        cout<<g->isCyclic()<<endl;
    }
}

/*The structure of the class is as follows 
which contains an integer V denoting the no 
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};*/
/*You are required to complete this method*/

bool dfs(int s,list<int> *adj,vector<bool> &visited,int prev){
	visited[s]=true;
	for(auto i=adj[s].begin();i!=adj[s].end();i++){
		if(visited[*i]){
			if(*i!=prev){
				//cout<<s<<" "<<*i<<endl;
				return true;
			}
		}
		else if(dfs(*i,adj,visited,s))
			return true;
	}
	return false;
}

bool Graph :: isCyclic(){
	vector<bool> visited(V,false);
	for(int i=0;i<V;i++){
		if(!visited[i])
			if(dfs(i,adj,visited,-1))
				return true;
	}
	return false;
}
