#include<iostream>
#include<list>
using namespace std;

class graph{
	int V;
	list<int> *adj;
	public:
		graph(int V);
		void addEdge(int v,int w);
		void bfs(int s,bool visited[]);
		int bfs_start(char c[]);
};

graph::graph(int V){
	this->V=V;
	this->adj=new list<int>[V];
}
void graph::addEdge(int v,int w){
	adj[v].push_back(w);
	adj[w].push_back(v);
}
void graph::bfs(int s,bool visited[]){
	/*bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	*/
	list<int> queue;
	queue.push_back(s);
	visited[s]=true;
	
	while(!queue.empty()){
		int nod=queue.front();
		//cout<<nod<<" ";
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
int graph::bfs_start(char c[]){
	int ctr=0;
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	for(int i=0;i<V;i++){
		if(c[i]=='X' && visited[i]==false){
			ctr++;
			bfs(i,visited);
		}	
	}
	return ctr;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char a[n][m];
		char c[n*m];
		int temp=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				c[temp]=a[i][j];
				temp++;
			}
		}
		int V=n*m;
		graph g(V);
		char b[n+2][m+2];
		
		for(int i=0;i<n+1;i++){
			for(int j=0;j<m+1;j++){
				b[i][j]='O';
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				b[i+1][j+1]=a[i][j];
			}
		}
		
		for(int i=1;i<n+1;i++){
			for(int j=1;j<m+1;j++){
				if(b[i][j]=='X'){
					if(b[i+1][j]=='X'){
						g.addEdge( (i-1)*m+(j-1) , i*m+(j-1) );
					}
					if(b[i][j+1]=='X'){
						g.addEdge( (i-1)*m+(j-1) , (i-1)*m+j );
					}
				}
			}
		}
		cout<<g.bfs_start(c)<<endl;	
	}
}
