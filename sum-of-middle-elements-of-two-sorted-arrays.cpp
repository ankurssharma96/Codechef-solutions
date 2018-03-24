#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a;
		vector<int> b;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			a.push_back(temp);
		}
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			b.push_back(temp);
		}
		int sum=0;
		int j=0,k=0;
		for(int i=0;i<=n;i++){
			if(a[j]<=b[k]){
				if(i==n-1 || i==n){
					sum+=a[j];
					//cout<<a[j]<<endl;
				}
					
				j++;
			}
			else if(b[k]<a[j]){
				if(i==n-1 || i==n){
					sum+=b[k];
					//cout<<b[k]<<endl;
				}
					
				k++;
			}
		}
		cout<<sum<<endl;
	}
}
