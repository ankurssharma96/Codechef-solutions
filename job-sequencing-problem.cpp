#include<iostream>
#include<limits.h>
#include<string.h>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int j[n],d[n],p[n];
		int max=INT_MIN;
		multimap<int,int> mmap;
		for(int i=0;i<n;i++){
			cin>>j[i]>>d[i]>>p[i];
			if(d[i]>max)
				max=d[i];
			mmap.insert(make_pair(p[i],d[i]));
		}
		bool ded[max];
		memset(ded,true,max);
		int sum=0;
		int cnt=0;
		multimap<int,int>::reverse_iterator rit;
		for(rit=mmap.rbegin();rit!=mmap.rend();rit++){
			int flag=0;
			int dd=rit->second-1;
			for(int i=dd;i>=0;i--){
				if(ded[i]){
					ded[i]=false;
					cnt++;
					sum+=rit->first;
					goto tag;
				}
			}
			tag:
				;
		}
		cout<<cnt<<" "<<sum<<endl;
	}
}
