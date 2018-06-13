#include<iostream>
#include<utility>
#include<queue>
using namespace std;
int arr[30][30];

struct cell
{
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};

bool check(int s1,int s2,int n,int m){
	if(s1>=0 && s1<=n-1 && s2>=0 && s2<=m-1 && arr[s1][s2]==-1){
		arr[s1][s2]=0;
		return true;
	}
	else
		return false;
}

int steps(int n,int m,int s1,int s2,int d1,int d2){
	int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
	int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
	queue<cell> q;
	q.push(cell(s1,s2,0));
	
	arr[s1][s2]=0;
	
	while(!q.empty()){
		
		cell p=q.front();
		q.pop();
		
		if(d1==p.x && d2==p.y)
			return p.dis;
		
		
		for(int i=0;i<8;i++){
			int tt1= p.x+xMove[i];
			int tt2= p.y+yMove[i];
			if(check(tt1,tt2,n,m)){
				arr[tt1][tt2]=0;
				q.push(cell(tt1,tt2,p.dis+1));	
			}
		}
	}
	return -1;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int s1,s2,d1,d2;
		cin>>s1>>s2>>d1>>d2;
		for(int i=0;i<30;i++){
			for(int j=0;j<30;j++)
				arr[i][j]=-1;
		}
		queue< pair<int,int> > q;
		
		cout<<steps(n,m,s1-1,s2-1,d1-1,d2-1)<<endl;
	}
}
