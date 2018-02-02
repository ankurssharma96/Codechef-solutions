#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s="www.abc.xy";   
    int k;
    cin >> k;
    int a;
    for(int i=0;i<n;i++)
    {   if(s[i]>=65 && s[i]<=90)
             {   s[i]=s[i]+(k%26);
             	if(s[i]>90)
                    	s[i]=(s[i]-65)%26 + 65;
             				 
			 }
	else if(s[i]>=97 && s[i]<=122)
		{  
			s[i]=s[i]+(k%26);
			if(s[i]<0){
				s[i]+=230;
			}
		   	if((int)s[i]>122){
		      	s[i]=(s[i]-97)%26 + 97;
		   }
		}
   
    }
    cout<<s;
    return 0;
}
