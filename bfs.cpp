#include<iostream>
#include<list>
using namespace std;

class graph{
	int V;
	list<int> *adj;
	public:
		graph(int V);
		void addEdge(int v,int w);
		void bfs(int s);
};

graph::graph(int V){
	this->V=V;
	this->adj=new list<int>[V];
}
void graph::addEdge(int v,int w){
	adj[v].push_back(w);
}
void graph::bfs(int s){
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	
	list<int> queue;
	queue.push_back(s);
	visited[s]=true;
	
	while(!queue.empty()){
		int nod=queue.front();
		cout<<nod<<" ";
		queue.pop_front();
		list<int>::iterator it;
		for(it=adj[nod].begin();it!=adj[nod].end();it++){
			if(visited[*it]==false){
				queue.push_back(*it);
				visited[*it]=true;
			}
		}
	}
}

int main(){
	graph g(4);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    g.bfs(3);
}
