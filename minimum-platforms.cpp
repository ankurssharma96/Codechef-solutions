#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int fun(int arr[], int dep[], int n)
{
   sort(arr, arr+n);
   sort(dep, dep+n);
   int count = 1, max = 1;
   int i = 1, j = 0;
   while (i < n && j < n)
   {
      if (arr[i] < dep[j])
      {
          count++;
          i++;
          if (count > max) 
              max = count;
      }
      else
      {
          count--;
          j++;
      }
   }
   return max;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],dep[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			cin>>dep[i];
		}
		cout<<fun(arr,dep,n)<<endl;		
	}
}

/*
int main(){
	multiset<int> dep;
	multiset<int> tot;
	multiset<int>::iterator it;
	multiset<int>::iterator it1;
	int t;
	int count=0,max=0;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,b;
		for(int i=0;i<n;i++){
			cin>>a;
			tot.insert(a);
		}
		for(int i=0;i<n;i++){
			cin>>b;
			dep.insert(b);
			tot.insert(b);
		}
		for(it=tot.begin();it!=tot.end();it++){
			it1=dep.find(*it);
			if(it1!=dep.end()){
				count--;
				dep.erase(it1);
			}
			else{
				count++;
				if(count>max)
					max=count;
			}
		}
		cout<<max<<endl;		
	}
}*/
