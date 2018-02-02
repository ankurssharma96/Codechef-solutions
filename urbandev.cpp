#include<iostream>
#include<utility>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int x1[n],y1[n],x2[n],y2[n],i,j;
	long long int xp[n],yp[n],temp1=0,temp2=0;
	long long int arr[n],a[n],sum=0;
	pair<long long int,long long int> fi1;
	pair<long long int,long long int> se1;
	pair<long long int,long long int> fi2;
	pair<long long int,long long int> se2;
	for(i=0;i<n;i++){
		arr[i]=0;
		cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
		if(x1[i]==x2[i]){
			xp[temp1]=i;
			temp1++;
			a[i]=0;
		}
		else if(y1[i]==y2[i]){
			yp[temp2]=i;
			temp2++;
			a[i]=1;
		}
	}
	for(i=0;i<n;i++){
		fi1=make_pair(x1[i],y1[i]);
		se1=make_pair(x2[i],y2[i]);
		if(a[i]==0){
			for(j=0;j<temp2;j++){
				fi2=make_pair(x1[yp[j]],y1[yp[j]]);
				se2=make_pair(x2[yp[j]],y2[yp[j]]);
				if((x1[i]-x1[yp[j]])*(x1[i]-x2[yp[j]])<=0 && (y1[yp[j]]-y1[i])*(y1[yp[j]]-y2[i])<=0 ){
					if(fi1!=fi2 && fi1!=se2 && se1!=fi2 && se1!=se2)
					{
						arr[i]+=1;
						sum++;
					}
					
				}
			}
		}
		if(a[i]==1){
			for(j=0;j<temp1;j++){
				fi2=make_pair(x1[xp[j]],y1[xp[j]]);
				se2=make_pair(x2[xp[j]],y2[xp[j]]);
				if((y1[i]-y1[xp[j]])*(y1[i]-y2[xp[j]])<=0 && (x1[xp[j]]-x1[i])*(x1[xp[j]]-x2[i])<=0 ){
					if(fi1!=fi2 && fi1!=se2 && se1!=fi2 && se1!=se2){
						arr[i]+=1;
					}
				}
			}
		}
	}
	cout<<sum<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
}
