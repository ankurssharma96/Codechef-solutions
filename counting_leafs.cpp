/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include<queue>
#include<set>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	set<int> s;
	set<int>::iterator it;
	for(int i=0;i<n;i++)
		s.insert(i);
		
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.erase(a[i]);
	}
		
	int x;
	cin>>x;
	queue<int> q;
	q.push(x);
	
	while(!q.empty()){
		int del=q.front();
		q.pop();
		it=s.find(del);
		if(it!=s.end())
			s.erase(del);
		for(int i=0;i<n;i++){
			if(a[i]==del){
				q.push(i);
			}
		}
	}
	cout<<s.size();
}

