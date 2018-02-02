#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
        if (str[l++] != str[h--])
            return false;
            
    if(str.length()>1){
    	printf("YES\n");
    	return true;
	}
    
}

void subString(char str[], int n)
{
    for (int i = 0; i <n; i++)
    {
    string c="";
    c=c+str[i];
        for (int k = i+1; k < n; k++)
        {
        	c=c+str[k];
            if(isPalindrome(c))
            	return;
        }
    }
    cout<<"NO"<<endl;
}

int main() 
{
	int t;
	cin>>t;
	while(t--){
		char str[100005];
		cin>>str;
		subString(str, strlen(str));
	}
}
