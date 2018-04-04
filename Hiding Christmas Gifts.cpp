#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

class Graph
{
    int V;   
    list<int> *adj;
 
    bool DFSUtil(int v, bool visited[], int end, int *count);
public:
    Graph(int V);
    void addEdge(int v, int w);
    bool DFS(int v, int end, int *count);
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
	//cout<<"w";
    adj[v].push_back(w);
    adj[w].push_back(v);
}
 
bool Graph::DFSUtil(int v, bool visited[],int end, int *count)
{
    visited[v] = true;
    //cout << v << " ";
	if(v==end){
		count[v]++;
		return true;
	}
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i){
        if (!visited[*i]){
        	bool temp=DFSUtil(*i, visited,end,count);
        	if(temp){
				count[v]++;
				return true;
			}
		}
	}
	return false;
}
 
bool Graph::DFS(int v,int end, int *count)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
	
    bool temp=DFSUtil(v, visited,end,count);
    /*if(temp){
		count[v]++;
		return true;
	}*/
}
 
int main()
{ 
	int n,m;
	cin>>n>>m;
	int count[n]={0};
	Graph g(n); 
	for(int i=1;i<n;i++){
		int a,b;
		cin>>a>>b;
		//cout<<"w";
		g.addEdge(a-1,b-1);
	}
	//cout<<"working";
	for(int i=0;i<m;i++){
		int p,q;
		cin>>p>>q;
		g.DFS(p-1,q-1,&count[0]);
		/*for(int i=0;i<n;i++)
 			cout<<count[i]<<" ";
    	cout<<endl;*/
	}
	sort(count,count+n);
	cout<<count[n-1];
	return 0;
}
