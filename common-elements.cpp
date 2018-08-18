#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		int l1=0,l2=0,l3=0;
		int a1[n1],a2[n2],a3[n3];
		for(int i=0;i<n1;i++){
			cin>>a1[i];
		}
		for(int i=0;i<n2;i++){
			cin>>a2[i];
		}
		for(int i=0;i<n3;i++){
			cin>>a3[i];
		}
		int flag=0;
		while(l1<n1 && l2<n2 && l3<n3){
			if(a1[l1]==a2[l2] && a2[l2]==a3[l3]){
				cout<<a1[l1]<<" ";
				l1++;l2++;l3++;
				flag=1;
			}
			else if(a1[l1]<=a2[l2] && a1[l1]<=a3[l3]){
				l1++;
			}
			else if(a2[l2]<=a1[l1] && a2[l2]<=a3[l3]){
				l2++;
			}
			else if(a3[l3]<=a1[l1] && a3[l3]<=a2[l2]){
				l3++;
			}
		}
		if(!flag){
			cout<<-1;
		}
		cout<<endl;
	}
}
