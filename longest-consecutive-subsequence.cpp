#include<iostream>
#include<set>
#include<limits.h>
using namespace std;

int findLongestConseqSubseq(int a[], int n)
{
	set<int> m;
	set<int>::iterator it,it1;
	
	for(int i=0;i<n;i++){
		m.insert(a[i]);
	}
	
	it=m.begin();
	it1=m.begin();
	it1++;
	
	int ctr=0;
	int max=0;
	
	while(it1!=m.end()){
		if(*it1 - *it == 1){
			ctr++;
		}
		else{
			ctr=0;
		}
		if(ctr>max)
			max=ctr;
		it++;it1++;
	}
	
	return max+1;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<< findLongestConseqSubseq(a, n)<<endl;
		
	}
	return 0;
}
