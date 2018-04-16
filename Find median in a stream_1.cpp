#include<iostream>
#include<ctype.h>
#include<limits>
#include<math.h>
#include<queue>
using namespace std;

priority_queue<int> max_heap_left;
priority_queue<int,vector<int>,greater<int> > min_heap_right;

int find_median(int x,int &median){
	if(max_heap_left.size() > min_heap_right.size()){
		if(x<median){
			min_heap_right.push(max_heap_left.top());
			max_heap_left.pop();
			max_heap_left.push(x);
		}
		else{
			min_heap_right.push(x);
		}
		median=floor((max_heap_left.top()+min_heap_right.top())/2);
	}
	else if(min_heap_right.size() > max_heap_left.size()){
		if(x>median){
			max_heap_left.push(min_heap_right.top());
			min_heap_right.pop();
			min_heap_right.push(x);
		}
		else{
			max_heap_left.push(x);
		}
		median=floor((max_heap_left.top()+min_heap_right.top())/2);
	}
	else if(min_heap_right.size() == max_heap_left.size()){
		if(x>median){
			min_heap_right.push(x);
			median=min_heap_right.top();
		}
		else{
			max_heap_left.push(x);
			median=max_heap_left.top();
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	int median=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		find_median(arr[i],median);
		cout<<median<<endl;
	}
}
