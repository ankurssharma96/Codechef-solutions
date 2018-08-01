#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>k>>n;
		multiset<int> s;
		multiset<int>::iterator it;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			s.insert(num);
			if(i<k-1){
				cout<<"-1 ";
			}
			else if(i==k-1){
				it=s.begin();
				cout<<*it<<" ";
			}
			else{
				if(num<*it){
					cout<<*it<<" ";
				}
				else{
					it++;
					cout<<*it<<" ";
				}
			}
		}
		cout<<endl;
	}
}
