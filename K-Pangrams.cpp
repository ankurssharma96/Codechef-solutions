#include<map>
#include<string.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {   
        string s;
        cin>>s;
        int k;
        cin>>k;
        int arr[26];
        for(int i=0;i<26;i++)
        	arr[i]=0;
        if(s.length()>=26)
		{
	        for(int i=0;i<s.length();i++)
	        {
	        	if(s[i]>='A' && s[i]<='Z'){
	        		arr[s[i]-'A']=1;	
				}
	            else if(s[i]>='a' && s[i]<='z'){
	            	arr[s[i]-'a']=1;
				}
	        }
	        int count=0;
	        for(int i=0;i<26;i++)
	        {   
	        	//cout<<arr[i]<<" ";
	            if(arr[i]==0)
	            	count++;
	        }
	        if(count<=k)
				cout<<"1\n";
	        else
				cout<<"0\n";
		}
		else cout<<"0\n";
    }
	return 0;
}
