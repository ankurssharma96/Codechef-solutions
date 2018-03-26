#include<iostream>
#include<queue>
using namespace std;

struct cell{
	int x;
	int y;
	int dis;
	cell(int a, int b, int c){
		x=a;
		y=b;
		dis=c;
	}
};

bool isIn(int x,int y,int n){
	if(x>=1 && x<=n && y>=1 && y<=n)
		return true;
	else
		return false;
}

int fun(int kni[2], int tar[2], int n){
	queue<cell> q;
	int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    
    q.push(cell(kni[0],kni[1],0));
    
    bool visit[n+1][n+1];
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=n;j++)
    		visit[i][j]=false;
    		
    while(!q.empty()){
    	cell t=q.front();
    	q.pop();
    	visit[t.x][t.y]=true;
    	if(t.x==tar[0] && t.y==tar[1])
    		return t.dis;
    	for(int i=0;i<8;i++){
    		int x=t.x+dx[i];
    		int y=t.y+dy[i];
    		int dis=t.dis+1;
    		if(isIn(x,y,n) && visit[x][y]==false){
    			q.push(cell(x,y,dis));
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int kni[2],tar[2];
		cin>>kni[0]>>kni[1];
		cin>>tar[0]>>tar[1];
		cout<<fun(kni,tar,n)<<endl;
	}
}
