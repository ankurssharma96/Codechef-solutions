#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
	
		int m_h=0,m_f=0;
		for(int i=0;i<n;i++){
			m_h+=a[i];
			if(m_h<0){
				m_h=0;
			}
			else if(m_h>m_f){
				m_f=m_h;
			}
		}
		sort(a,a+n);
		if(m_f==0){
			cout<<a[n-1]<<endl;
		}
		else{
			cout<<m_f<<endl;	
		}
	
		
	}
	
}
