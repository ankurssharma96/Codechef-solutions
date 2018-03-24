#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> a;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			a.push_back(temp);
		}
		int max=0;
		int ctr=0;
		int sum=0;
		int temp;
		int diff=0;
		int sum_temp=0;
		for(int i=0;i<n;i++){
			if(a[i]>=max){
				temp=i;
				sum_temp=sum;
				//diff=a[i]-max;
				max=a[i];
				//sum-=diff*ctr;
				ctr=0;
			}
			else{
				ctr++;
				sum+=max-a[i];
			}
		}
		//cout<<sum<<endl;
		max=0;
		ctr=0;
		sum=sum_temp;
		sum_temp=0;
		diff=0;
		
		for(int i=n-1;i>=temp;i--){
			if(a[i]>=max){
				//temp=i;
				sum_temp=sum;
				//diff=a[i]-max;
				max=a[i];
				//sum-=diff*ctr;
				ctr=0;
			}
			else{
				ctr++;
				sum+=max-a[i];
			}
		}
		cout<<sum<<endl;
	}
}
