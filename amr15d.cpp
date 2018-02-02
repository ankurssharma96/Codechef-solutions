#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
long long int get_num(long long int &num)
{
     num = 0;
    char c = getchar_unlocked();
    long long int flag = 0;
    while(!((c>='0' & c<='9') || c == '-'))
        c=getchar_unlocked();
    if(c == '-')
    {
        flag = 1;
        c=getchar_unlocked();
    }
    while(c>='0' && c<='9')
    {
        num = (num<<1)+(num<<3)+c-'0';
        c=getchar_unlocked();
    }
    if(flag==0)
        return num;
    else
        return -1*num;
}

int main(){
	long long int n,i,q,sum;
	n = get_num(n);

//	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++){
		a[i] = get_num(a[i]);

	//	cin>>a[i];
	}
	sort(a,a+n);
	q = get_num(q);

	//cin>>q;
	long long int b;
	while(q--){
		sum=0;
		b = get_num(b);

	//	cin>>b;
		for(i=0;i<n-b;i++){
			sum=sum+a[i];
		}
		printf("%lld\n",sum);
	//	cout<<sum<<endl;
	}
	
}
