#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */
// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
	int a[r-l+1];
	int ctr=0;
	int temp1=l;
	int temp2=m+1;
	while(temp1<=m && temp2<=r){
		if(arr[temp1]<=arr[temp2]){
			a[ctr]=arr[temp1];
			temp1++;
		}
		else if(arr[temp2]<arr[temp1]){
			a[ctr]=arr[temp2];
			temp2++;
		}
		ctr++;
	}

	while(temp2<=r){
		a[ctr]=arr[temp2];
		ctr++;temp2++;
	}
	
	while(temp1<=m){
		a[ctr]=arr[temp1];
		ctr++;temp1++;
	}

	for(int i=l,ctr=0;i<=r;i++,ctr++){
		arr[i]=a[ctr];
	}
}
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf(" ");
}
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}

