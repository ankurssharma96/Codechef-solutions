#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> odd,even;
		int pos=0;
		int t1=0,t2=0;
		while(n){
			if(pos%2){
				odd.push_back(n & 1);
				t1++;
			}
			else{
				even.push_back(n & 1);
				t2++;
			}
			n=n>>1;
			pos++;
		}
		
		if(t1!=t2){
			odd.push_back(0);
			pos++;
			t1++;
		}
		
		for(int i=0;i<pos;i++){
			n=n<<1;
			if(i%2){
				t1--;
				n=(n | odd[t1]);			
			}
			else{
				t2--;
				n=(n | even[t2]);
			}
		}
		cout<<n<<endl;
	}
}
