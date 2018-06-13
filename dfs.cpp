#include<iostream>
#include<list>
using namespace std;

class graph{
	int V;
	list<int> *adj;
	public:
		graph(int V);
		void addEdge(int v,int w);
		void dfs(int s);
		void dfsUtil(int s,bool visited[]);
};

graph::graph(int V){
	this->V=V;
	this->adj=new list<int>[V];
}
void graph::addEdge(int v,int w){
	adj[v].push_back(w);
}
void graph::dfsUtil(int s,bool visited[]){
	visited[s]=true;
	cout<<s<<" ";
	list<int>::iterator it;
	for(it=adj[s].begin();it!=adj[s].end();it++){
		if(!visited[*it]){
			dfsUtil(*it,visited);
		}
	}
}
void graph::dfs(int s){
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	dfsUtil(s,visited);
}

int main(){
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.dfs(3);
 
    return 0;
}
