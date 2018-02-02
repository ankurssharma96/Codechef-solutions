#include<iostream>
#include<map>
#include<list>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,w,v,p,k,s,temp=0;
		list<long long int> *adj;
		cin>>n;
		adj = new list<long long int>[n];
		map<long long int,long long int> mymap;
		map<long long int,long long int> map2;
		for(long long int i=0;i<n;i++){
			cin>>p;
			mymap.insert(pair<long long int,long long int>(i,p));
		}
		for(long long int i=0;i<n-1;i++){
			cin>>w>>v;
			adj[v-1].push_back(w-1);
			adj[w-1].push_back(v-1);
		}
		
		for(k=0;k<n;k++){
			temp=0;
			bool *visited = new bool[n];
   			for(long long int i = 0; i < n; i++)
      			visited[i] = false;
      			
  			list<long long int> queue;
     	    visited[k] = true;
     	    temp++;
 			queue.push_back(k);
 			list<long long int>::iterator i;
 
		    while(!queue.empty())
    		{
				s = queue.front();
        		queue.pop_front();
 	        	for(i = adj[s].begin(); i != adj[s].end(); ++i)
    	    	{
    	    		map<long long int,long long int>::iterator it;
        		    if(!visited[*i])
           			{
            		   	visited[*i] = true;
            		   	temp++;
            		    queue.push_back(*i);
            		               		    
            		    it=mymap.find(*i);
            		    map2.insert(pair<long long int,long long int>(it->second,it->first));       		    
            		}
            		if(temp==n)
            		    goto label;
        		}
    		}
    		label:
    			map<long long int,long long int>::iterator it;
    			for(i = adj[k].begin(); i != adj[k].end(); ++i){
    				it=mymap.find(*i);
            		map<long long int,long long int>::iterator it1;
            		it1=mymap.find(it->second);
            		map2.erase(it1);
				}
    			map<long long int,long long int>::reverse_iterator bt=map2.rbegin();
                cout<<(bt->second)+1<<" ";
    			map2.clear();
		}
	}
}
