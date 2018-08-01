#include<bits/stdc++.h>
using namespace std;

void sortUtil(int nod,vector<int> graph[],string &s,bool* visited){
	visited[nod]=true;
	vector<int>::iterator it;
	for(it=graph[nod].begin();it!=graph[nod].end();it++){
		if(!visited[*it]){
			sortUtil(*it,graph,s,visited);
		}
	}
	char temp=(nod+'a');
	s=s+temp;
}

string topologicalSort(vector<int> graph[],int n){
	string s="";
	bool visited[n];
	for(int i=0;i<n;i++)
    	visited[i]=false;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			sortUtil(i,graph,s,visited);
		}
	}
	reverse(s.begin(),s.end());
	return s;
}

string printOrder(string dict[], int n, int k){
	vector<int> graph[k];
	for(int i=0;i<n-1;i++){
		string s1=dict[i], s2=dict[i+1];
		int p=0, q=0;
		while(p<s1.length() && q<s2.length() && s1[p]==s2[q]){
			p++;q++;
		}
		if(p<s1.length() && q<s2.length()){
			graph[s1[p]-'a'].push_back(s2[q]-'a');
		}
	}
	return topologicalSort(graph,k);
}



string order;
bool f(string a,string b)
{
	int p1=0;int p2=0;
	for(int i=0;i<min(a.size(),b.size()) and p1 ==p2;i++ )
	{
		p1 = order.find(a[i]);
		p2 = order.find(b[i]);
	//	cout<<p1<<" "<<p2<<endl;
	}
	
	if(p1 == p2 and a.size()!=b.size())
	return a.size()<b.size();
	
	return p1<p2;
}
	
// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    
        string ss = printOrder(s,n,k);
        order="";
        for(int i=0;i<ss.size();i++)
        order+=ss[i];
        
        string temp[n];
        std::copy(s, s + n, temp);
        sort(temp,temp+n,f);
        
        bool f= true;
        for(int i=0;i<n;i++)
        if(s[i]!=temp[i])f=false;
        
        cout<<f;
        cout<<endl;
        
    }
	return 0;
}


