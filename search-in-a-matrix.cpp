#include<iostream>
using namespace std;

int search(int mat[31][31], int m, int n, int x)
{
   int i = 0, j = n-1; 
   while ( i < m && j >= 0 )
   {
      if ( mat[i][j] == x )
			return 1;
      if ( mat[i][j] > x )
        j--;
      else //  if mat[i][j] < x
        i++;
   }
   return 0;  // if ( i==n || j== -1 )
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int flag=0;
		int n,m;
		cin>>n>>m;
		
		int a[31][31];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}

		int x;
		cin>>x;
		
		cout<<search(a,m,n,x)<<endl;
	}
}
		/*
		int d=min(m,n);
		
		if(x==a[0][0]){
			flag=1;
		}

		
		int i=0;
		while(x>a[i][i] && i<d){
			i++;
		}

		if(i!=d){
			for(int j=i-1;j<n;j++){
				if(a[i-1][j]==x)
					flag=1;
			}
			for(int j=0;j<i;j++){
				if(a[i][j]==x)
					flag=1;
			}
		}
		
		if(d==n){
			while(i<m && x>a[i][n-1]){
				i++;
			}
			for(int j=0;j<n;j++){
				if(a[i][j]==x)
					flag=1;
			}
		}

		
		if(d==m){
			while(i<n && x>a[m-1][i]){
				i++;
			}
			for(int j=0;j<m;j++){
				if(a[j][i]==x)
					flag=1;
			}
		}
*/
		
		//cout<<flag<<endl;

	//}

