#include<bits/stdc++.h>
using namespace std;

void upd_arr(int *arr,int i){
	while(i){
		arr[i%10]+=1;
		i=i/10;
	}
	return;
}

void simpleSieve(int limit,bool *prime){
    for (int p=2; p*p<=limit; p++){
        if (prime[p] == true){
            for (int i=p*2; i<=limit; i+=p)
                prime[i] = false;
        }
    }
    /*for (int p=2; p<=limit; p++){
        if (prime[p] == true){
            cout<<p<<" ";
        }
        
    }
    cout<<endl;/*/
}


int main(){
	int t;
	cin>>t;
	int max=INT_MIN;
	vector< pair<int,int> > v;
	while(t--){
		int l,r;
		cin>>l>>r;
		v.push_back(make_pair(l,r));
		if(r>max)
			max=r;
	}
	
	bool prime[max+1];
	memset(prime,true,sizeof(prime));
	simpleSieve(max,prime);

	for(int i=0;i<v.size();i++){
		
		int arr[10];
		for(int i=0;i<10;i++)
			arr[i]=0;
		
		int l=v[i].first;
		int r=v[i].second;

		for(int j=l;j<=r;j++){
			if(prime[j]){
				upd_arr(arr,j);
			}
		}
		/*for(int i=0;i<10;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;*/
		int max_fre=-1;
		int ind;
		for(int i=0;i<10;i++){
			if(arr[i]>=max_fre){
				max_fre=arr[i];
				ind=i;
			}
		}
		if(max_fre==0){
			ind=-1;
		}
		cout<<ind<<endl;
	}
}
