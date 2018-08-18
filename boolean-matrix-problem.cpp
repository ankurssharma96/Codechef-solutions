#include<iostream>
using namespace std;
int mat[21][21];
 
void modifyMatrix(int R,int C){
	bool row_flag = false;
	bool col_flag = false;
	for(int i = 0; i < R; i++) {
		for(int j = 0; j < C; j++) {
			if(i == 0 && mat[i][j] == 1)
				row_flag = true;
			
			if(j == 0 && mat[i][j] == 1)
				col_flag = true;
			
			if(mat[i][j] == 1) {
				mat[0][j] = 1;
				mat[i][0] = 1;
			}
		}
	}
	for (int i = 1; i < R; i++) {
		for (int j = 1; j < C; j++) {
			if (mat[0][j] == 1 || mat[i][0] == 1)
				mat[i][j] = 1;
		}
	}
	if (row_flag == true) {
		for (int i = 0; i < C; i++) {
			mat[0][i] = 1;
		}
	}
	if (col_flag == true) {
		for (int i = 0; i < R; i++) {
			mat[i][0] = 1;
		}
	}
}
 
void printMatrix(int R,int C){
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << mat[i][j]<<" ";
        }
    }
}
 
int main()
{
	int t;
	cin>>t;
	while(t--){
		int R,C;
		cin>>R>>C;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin>>mat[i][j];
			}
		}
		modifyMatrix(R,C);
		printMatrix(R,C);
		cout<<endl;
	}
}
