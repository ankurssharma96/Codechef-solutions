#include<iostream>
using namespace std;

long long int power(long long int x, long long int y)
{
    long long int res = 1;     // Initialize result
  
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x)%1000000007;
  
        // n must be even now
        y = y>>1;
        x = (x*x)%1000000007; 
    }
    return (res%1000000007);
}

/*
long long int C(long long int n, long long int r) {
    if(r > n / 2) r = n - r; 
    long long int ans = 1;
    long long int i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
        ans=ans%1000000007;
    }
    return ans;
}*/

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,num,ctr,res;
		cin>>n;
		if(n==1)
		{
			cout<<"0"<<endl;
		}
		else{
			cout<<(power(2,(n-1))-2)<<endl;
		}
		
		/*
		res=0;
		ctr=1;
		num=n-1;
		if(n<3){
			cout<<"0"<<endl;
		}
		else{
			while(ctr<num){
				res=res+C(num,ctr);
				res=res%1000000007;
				ctr++;
			}
			cout<<res<<endl;
		}*/
	}
} 
