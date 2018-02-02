#include <bits/stdc++.h>
using namespace std;
 
void simpleSieve(int limit, vector<int> &prime,bool marks[],int min)
{

    bool mark[limit+1];
    memset(mark, true, sizeof(mark));
 
    for (int p=2; p*p<limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }
 
    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            if(p>=min)
            	marks[p-min]=true;
            	//cout << p << endl;
        }
    }
}

void segmentedSieve(int n,bool marks[],int min)
{
    int limit = floor(sqrt(n))+1;
    vector<int> prime;  
    simpleSieve(limit, prime,marks,min); 

    int low  = limit;
    int high = 2*limit;
    while (low < n)
    {
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));
        for (int i = 0; i < prime.size(); i++)
        {
            int loLim = floor(low/prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];
            for (int j=loLim; j<high; j+=prime[i])
                mark[j-low] = false;
        }
 
        for (int i = low; i<high; i++)
            if (mark[i - low] == true)
            	if(i>=min)
                	marks[i-min]=true;;
					//cout << i << endl;
 
        low  = low + limit;
        high = high + limit;
        if (high >= n) high = n;
    }
}

int main()
{
	int t;
	cin>>t;
	int a[t],b[t];
	int max=0;
	int min=999999999;
	for(int i=0;i<t;i++){
		cin>>a[i]>>b[i];
		if(b[i]>max)
			max=b[i];
		if(a[i]<min)
			min=a[i];
	}
	
	int val=max-min+1;
	bool marks[val];
    memset(marks, false, sizeof(marks));
	
    segmentedSieve(max,marks,min);
    for(int i=0;i<t;i++){
    	for(int j=a[i];j<=b[i];j++){
    		if(marks[j-min])
    			cout<<j<<endl;
    	}
    	cout<<endl;	
	}
    		
    return 0;
}
