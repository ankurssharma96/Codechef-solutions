#include <iostream>
using namespace std;
 
bool isSubsetSum(int *arr, int n, int sum)
{
    if(sum == 0)
        return true;
    if(n == 0 && sum!=0)
        return false;
    if(arr[n-1]>sum)
        return isSubsetSum(arr,n-1,sum);
    return isSubsetSum(arr,n-1,sum) || isSubsetSum(arr,n-1,sum-arr[n-1]);//go on and on until any conbination is made where sum is reached.
}
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,sum;
        cin >> n >> sum;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        if(isSubsetSum(arr,n,sum) == true)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
