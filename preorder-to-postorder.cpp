#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int> qq;
int flag=1;
void fun(queue<int> q){
	if(q.empty())
		return;
	int nod=q.front();
	q.pop();
	queue<int> ql,qr;
	while(!q.empty() && q.front()<nod){
		ql.push(q.front());
		q.pop();
	}
	while(!q.empty() && q.front()>nod){
		qr.push(q.front());
		q.pop();
	}
	if(!q.empty()){
		cout<<"NO"<<endl;
		flag=0;
		return;
	}
	fun(ql);
	fun(qr);
	qq.push(nod);
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		queue<int> q;
		for(int i=0;i<n;i++){
			cin>>a[i];
			q.push(a[i]);
		}
		flag=1;
		fun(q);
		if(flag==1){
			while(!qq.empty()){
				cout<<qq.front()<<" ";
				qq.pop();
			}
			cout<<endl;
		}
		while(!qq.empty())
			qq.pop();
	}
}
