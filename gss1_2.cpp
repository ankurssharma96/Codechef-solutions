#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<iostream>
#define ll long long int
using namespace std;

ll count=INT_MIN;
ll max_size;

ll getMid(ll s, ll e) {  return s + (e -s)/2;  }

ll getSumUtility(ll *st, ll ss, ll se, ll qs, ll qe, ll si)
{
	if(si>max_size)
		return 0;
		
    ll mid = getMid(ss, se);
    if (qs <= ss && qe >= se){
    	if(st[si]>count)
    		count=st[si];
    	getSumUtility(st, ss, mid, qs, qe, 2*si+1);
    	getSumUtility(st, mid+1, se, qs, qe, 2*si+2);
		return st[si];
	}
    if (se < qs || ss > qe)
        return 0;
    
    ll temp1=getSumUtility(st, ss, mid, qs, qe, 2*si+1);
    if(temp1>count)
    	count=temp1;
    
    ll temp2=getSumUtility(st, mid+1, se, qs, qe, 2*si+2);
    if(temp2>count)
    	count=temp2;
    
    ll sum=temp1+temp2; 
    if(sum>count)
    	count=sum;
    return count;
}

ll getSum(ll *st, ll n, ll qs, ll qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
    return getSumUtility(st, 0, n-1, qs, qe, 0);
}

ll constructSTUtil(ll arr[], ll ss, ll se, ll *st, ll si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    ll mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) + constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}

ll *constructST(ll arr[], ll n)
{
    ll x = (ll)(ceil(log2(n))); 
    max_size = 2*(ll)pow(2, x) - 1; 
    ll *st = new ll[max_size];
    for(ll i=0;i<max_size;i++)
    	st[i]=INT_MIN;
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
    ll *st = constructST(arr, n);
   
	ll m;
    cin>>m;
    while(m--){
    	count=INT_MIN;
    	ll x,y;
    	cin>>x>>y;
    	getSum(st, n, x, y);
    	cout<<count<<endl;
	}
    return 0;
}
