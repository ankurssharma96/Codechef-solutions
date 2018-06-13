#include<iostream>
#include<list>
using namespace std;
int count=0;
int result=0;
class graph{
	int V;
	list<int> *adj;
	bool dfsutil(int v,bool visited[]);
	public:
		graph(int V);
		void dfs(int v);
		void addedge(int v,int w);
};
graph::graph(int V){
	this->V=V;
	adj=new list<int>[V+1];
}
void graph::addedge(int v,int w){
//	cout<<v<<"  "<<w<<endl;
	adj[v].push_back(w);
	adj[w].push_back(v);
}
bool graph::dfsutil(int v,bool visited[]){
	visited[v]=true;
	count++;
	cout<<"node	"<<v<<"		count "<<count<<endl;
	if(count==V){
		result=1;
		return true;
	}
		
	list<int>::iterator it;
	for(it=adj[v].begin();it!=adj[v].end();it++){
		cout<<*it<<endl;
		if(!visited[*it]){
			dfsutil(*it,visited);
		}
	}
}
void graph::dfs(int v){
	bool *visited=new bool[V+1];
	for(int i=1;i<=V;i++)
		visited[i]=false;
	dfsutil(v,visited);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		count=0;
		result=0;
		graph g(n);
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			g.addedge(a,b);
		}
		g.dfs(1);
		cout<<result<<endl;
	}
}
