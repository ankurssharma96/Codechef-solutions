#include<iostream>
#include <stdio.h>
#include <string.h>
#include <limits.h>

int a[1000][1000];

using namespace std;

int kadane(int* arr, int* start, int* finish, int n)
{
    int sum = 0, maxSum = INT_MIN, i;
    *finish = -1;
    int local_start = 0;
 
    for (i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
            local_start = i+1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            *start = local_start;
            *finish = i;
        }
    }
    if (*finish != -1)
        return maxSum;
 
    maxSum = arr[0];
    *start = *finish = 0;
 
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            *start = *finish = i;
        }
    }
    return maxSum;
}
 
int findMaxSum(int M[1000][1000],int r,int c)
{
    int maxSum = INT_MIN, finalLeft, finalRight, finalTop, finalBottom;
	int ROW=r,COL=c;
    int left, right, i;
    int temp[ROW], sum, start, finish;
 
    for (left = 0; left < COL; ++left)
    {
        memset(temp, 0, sizeof(temp));
 
        for (right = left; right < COL; ++right)
        {
            for (i = 0; i < ROW; ++i)
                temp[i] += M[i][right];

            sum = kadane(temp, &start, &finish, ROW);
 
            if (sum > maxSum)
            {
                maxSum = sum;
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
            }
        }
    }
    return  maxSum;
}
 
 
int main()
{
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a[i][j];
			}
		}
		cout<<findMaxSum(a,r,c)<<endl;
	}
}
