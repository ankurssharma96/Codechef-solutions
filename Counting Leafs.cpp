/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include<set>
#include<queue>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int x;
	cin>>x;
	queue<int> q;
	q.push(x);
	while(!q.empty()){
		int del=q.front();
		q.pop();
		a[del]=-2;
		for(int i=0;i<n;i++){
			if(a[i]==del){
				q.push(i);
			}
		}
	}
	set<int> b;
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			a[a[i]]=-2;
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]!=-2)
			count++;
	}
	cout<<count;
}

