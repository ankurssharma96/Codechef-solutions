#include<iostream>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int arr[n];
		ll pos_ze=n;
		ll pos_on=0;
		ll ze=0;
		ll on=0;
		ll num1=0,num2=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]==0){
				ze++;
			}
			else{
				on++;
			}
		}
		for(ll i=0;i<n;i++){
			if(arr[i]==0){
				pos_ze=i+1;
				break;
			}
		}
		for(ll i=pos_ze;i<n;i++){
			if(arr[i]==0){
				num1++;
			}
			else 
				break;
		}
		for(ll i=n-1;i>=0;i--){
			if(arr[i]==1){
				pos_on=i+1;
				break;
			}
		}
		for(ll i=pos_on-2;i>=0;i--){
			if(arr[i]==1){
				num2++;
			}
			else 
				break;
		}
		ze=(n-ze)+1;
		pos_ze=ze-pos_ze;
		
		on=ze-1;
		pos_on=pos_on-on;
		if(pos_ze==0 || pos_on==0){
			cout<<0<<endl;
		}
		else{
			pos_ze+=num1;
			pos_on+=num2;
			if(pos_ze>pos_on)
				cout<<pos_ze<<endl;
			else 
				cout<<pos_on<<endl;
		}
		
	}
}
