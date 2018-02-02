#include<iostream>
using namespace std;
void merge(int *ar,int p,int q,int r){
	int n1=q-p+1;
	int n2=r-q;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++){
		L[i]=ar[p+i];
	}
	for(int i=0;i<n2;i++){
		R[i]=ar[q+i+1];
	}
	int i,j=0;
	int k=p;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			ar[k]=L[i];
			i++;
		}
		else{
			ar[k]=R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
    {
        ar[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        ar[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int *ar,int l,int r){
	if(l<r){
		int m = l+(r-l)/2;
 
        // Sort first and second halves
        merge_sort(&ar[0], l, m);
        merge_sort(&ar[0], m+1, r);
 
        merge(&ar[0], l, m, r);
		/*
		
		int q=(p+r)/2;
		merge_sort(&ar[0],p,q);
		merge_sort(&ar[0],q+1,r);
		merge(&ar[0],p,q,r);*/	
	}
	
}
int main(){
	int ar[]={35,33,42,10,14,19,27,44};
//	int ar[]={3,1,2,5};
	int size=sizeof(ar)/sizeof(ar[0]);
	merge_sort(&ar[0],0,size-1);
	for(int i=0;i<size;i++){
		cout<<ar[i]<<" ";
	}
}
