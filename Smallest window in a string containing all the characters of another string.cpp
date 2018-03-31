#include<iostream>
#include<limits.h>
using namespace std;
/*
string fun(string n,string x){
	int l1=n.length();
	int l2=x.length();
	if(l1<l2)
		return "";
		
	int a_n[256]={0};
	int a_x[256]={0};
	for(int i=0;i<l2;i++){
		a_x[x[i]]++;
	}
	int count=0;
	int start=0, start_index=-1;
	int min_len=INT_MAX;
	for(int i=0;i<l1;i++){
		a_n[n[i]]++;
		if(a_x[n[i]]!=0 && a_n[n[i]]<=a_x[n[i]]){
			count++;
		}
		if(count==l2){
			while(a_n[n[start]]>a_x[x[start]] || a_x[n[start]]==0){
				if(a_n[n[start]]>a_x[x[start]]){
					a_n[n[start]]--;
				}
				start++;
			}
			int len=i-start+1;
			if(len<min_len){
				start_index=start;
				min_len=len;
			}
		}
	}
	if(start_index==-1)
		return "";
		
	return (n.substr(start,min_len));
}
*/

string fun(string str, string pat)
{
    int len1 = str.length();
    int len2 = pat.length();
 
    // check if string's length is less than pattern's
    // length. If yes then no such window can exist
    if (len1 < len2)
    {
        //cout << "No such window exists";
        return "-1";
    }
 
    int hash_pat[256] = {0};
    int hash_str[256] = {0};
 
    // store occurrence ofs characters of pattern
    for (int i = 0; i < len2; i++)
        hash_pat[pat[i]]++;
 
    int start = 0, start_index = -1, min_len = INT_MAX;
 
    // start traversing the string
    int count = 0; // count of characters
    for (int j = 0; j < len1 ; j++)
    {
        // count occurrence of characters of string
        hash_str[str[j]]++;
 
        // If string's char matches with pattern's char
        // then increment count
        if (hash_pat[str[j]] != 0 &&
            hash_str[str[j]] <= hash_pat[str[j]] )
            count++;
 
        // if all the characters are matched
        if (count == len2)
        {
            // Try to minimize the window i.e., check if
            // any character is occurring more no. of times
            // than its occurrence in pattern, if yes
            // then remove it from starting and also remove
            // the useless characters.
            while ( hash_str[str[start]] > hash_pat[str[start]]
                || hash_pat[str[start]] == 0)
            {
 
                if (hash_str[str[start]] > hash_pat[str[start]])
                    hash_str[str[start]]--;
                start++;
            }
 
            // update window size
            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }
 
    // If no window found
    if (start_index == -1)
    {
    //cout << "No such window exists";
    return "-1";
    }
 
    // Return substring starting from start_index
    // and length min_len
    return str.substr(start_index, min_len);
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string n,x;
		cin>>n>>x;
		cout<<fun(n,x)<<endl;
	}
}
