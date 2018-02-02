#include<iostream>
#include<climits>
#define ll long long int
using namespace std;
ll start=0;
ll en=0;
ll count=0;
ll maxSubArraySum(ll *a, ll size)
{
    ll max_so_far = INT_MIN, max_ening_here = 0;
 	start=count=en=0;
    for (ll i = 0; i < size; i++)
    {
        max_ening_here = max_ening_here + a[i];
        count+=1;
        if (max_so_far < max_ening_here){
        	max_so_far = max_ening_here;
        	en=i;
        	start=en-count+1;
		}
             
        if (max_ening_here < 0){
        	max_ening_here = 0;
        	count=0;
		}
            
    }
    return max_so_far;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		ll k;
		ll whole_sum=0;
		cin>>n>>k;
		ll a[n];
		ll b[2*n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
			whole_sum+=a[i];
			b[i]=b[n+i]=a[i];
		}
		if(k==1){
			cout<<maxSubArraySum(&a[0], n)<<endl;
		}
		else if(k==2 || whole_sum<=0){
			cout<<maxSubArraySum(&b[0], 2*n)<<endl;
		}
		else{

			cout<<(k-2)*whole_sum+maxSubArraySum(&b[0], 2*n)<<endl;	
		}
	}
}
