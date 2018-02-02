#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
	long long int n,m,i,j,temp,p,temp1;
	string s;
	
	cin>>n>>m;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	pair<int,string> arr[m];
	pair<int,string> arr1[m];
	
	long long int ctr=0,ctr1=0;
	for(i=0;i<m;i++){
		temp1=0;
		cin>>temp;
		
		for(j=0;j<n;j++){
			if(a[j]==temp){
				cin>>p>>s;
				arr[ctr]=make_pair(p,s);
				ctr++;
				temp1=1;
				goto fw;
			}
		}
		fw:
		if(temp1==0){
			cin>>p>>s;
			arr1[ctr1]=make_pair(p,s);
			ctr1++;
		}
	}
	sort(arr,arr+ctr);
	sort(arr1,arr1+ctr1);
	for(i=ctr-1;i>=0;i--){
		cout<<arr[i].second<<endl;
	}
	for(i=ctr1-1;i>=0;i--){
		cout<<arr1[i].second<<endl;
	}	
}
