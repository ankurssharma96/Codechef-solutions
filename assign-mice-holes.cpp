#include<iostream>
#include<set>
#include<limits.h>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		multiset<int> m,h;
		multiset<int>::iterator it1,it2;
		for(int i=0;i<n;i++){
			int t;
			cin>>t;
			m.insert(t);
		} 
		for(int i=0;i<n;i++){
			int t;
			cin>>t;
			h.insert(t);
		} 
		int max=INT_MIN;
		it2=h.begin();
		for(it1=m.begin();it1!=m.end();it1++){
			int diff=abs(*it1 - *it2);
			it2++;
			if(diff>max)
				max=diff;
		}
		cout<<max<<endl;
	}
}
