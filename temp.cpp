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
		adj = new list<long long int>[n+1];
		map<long long int,long long int> mymap;
		map<long long int,long long int> map2;
		for(long long int i=1;i<=n;i++){
			cin>>p;
			mymap.insert(pair<long long int,long long int>(i,p));
		}
		for(long long int i=0;i<n-1;i++){
			cin>>w>>v;
			adj[v].push_back(w);
			adj[w].push_back(v);
		}
		
		for(k=1;k<=n;k++){
			temp=0;
			bool *visited = new bool[n+1];
   			for(long long int i = 0; i < n+1; i++)
      			visited[i] = false;
      			
  			list<long long int> queue;
     	    visited[k] = true;
     	    temp++;
 			queue.push_back(k);
 			list<long long int>::iterator i;
cout<<1;
		    while(!queue.empty())
    		{
				s = queue.front();
        		queue.pop_front();
cout<<2;        		
 	        	for(i = adj[s].begin(); i != adj[s].end(); ++i)
    	    	{
    	    		map<long long int,long long int>::iterator it;
cout<<3;
        		    if(!visited[*i])
           			{
            		   	visited[*i] = true;
            		   	temp++;
            		    queue.push_back(*i);
cout<<4;            		               		    
            		    it=mymap.find(*i);
            		    map2.insert(pair<long long int,long long int>(it->second,it->first));       		    
cout<<"*"<<*i;            		
					}
            		if(temp==n)
            		    goto label;
        		}
    		}
    		label:
cout<<6;
    			map<long long int,long long int>::iterator it;
    			for(i = adj[k].begin(); i != adj[k].end(); ++i){
    				it=mymap.find(*i);
            		map<long long int,long long int>::iterator it1;
            		it1=mymap.find(it->second);
            		map2.erase(it1);
				}
cout<<7;
    			map<long long int,long long int>::reverse_iterator bt=map2.rbegin();
                cout<<bt->second<<" ";
    			map2.clear();
		}
	}
}
