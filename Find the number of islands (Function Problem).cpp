/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*you are required to complete this method*/
void fun(int A[MAX][MAX], int i,int j){
    A[i][j]=2;
    
    if(A[i-1][j-1]==1)
        fun(A,i-1,j-1);
    if(A[i-1][j]==1)
        fun(A,i-1,j);
    if(A[i-1][j+1]==1)
        fun(A,i-1,j+1);
    if(A[i][j-1]==1)
        fun(A,i,j-1);
    if(A[i][j+1]==1)
        fun(A,i,j+1);
    if(A[i+1][j-1]==1)
        fun(A,i+1,j-1);
    if(A[i+1][j]==1)
        fun(A,i+1,j);
    if(A[i+1][j+1]==1)
        fun(A,i+1,j+1);
}


int findIslands(int A[MAX][MAX], int N, int M)
{
    int count=0;
    int B[MAX][MAX];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            B[i+1][j+1]=A[i][j];
        }
    }
    for(int i=0;i<N;i++){
        B[i][0]=2;
        B[i][M+1]=2;
    }
    for(int i=0;i<M;i++){
        B[0][i]=2;
        B[N+1][i]=2;
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            if(B[i][j]==1){
                count++;
                fun(B,i,j);
            }
        }
    }
    return count;
}
