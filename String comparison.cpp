#include<iostream>
using namespace std;

int compare_string(string a , string b){
    int m = a.length();
    int n = b.length();
    int i=0,j=0;
    while(i<m&&j<n){
    	if(a[i]>b[j])
        	return 1;
   	    else if(a[i]<b[j])
   	        return -1;
		//If both don't have 'ng' 
        //if(a[i]!='n'&&b[j]!='n'){
        if(i+1<m&&j+1<n&&a[i]!='n'&&a[i+1]!='g'&&b[j]!='n'&&b[j+1]!='g'){
        	if(a[i]>b[j])
        	  return 1;
   	        else if(a[i]<b[j])
   	          return -1;
            
        }
		if(a[i]!='n'&&b[j]!='n'){
        //if(i+1<m&&j+1<n&&a[i]!='n'&&a[i+1]!='g'&&b[j]!='n'&&b[j+1]!='g'){
        	if(a[i]>b[j])
        	  return 1;
   	        else if(a[i]<b[j])
   	          return -1;
            
        }
    	//If both have ng
    	if(i+1<m&&j+1<n&&a[i]=='n'&&a[i+1]=='g'&&b[j]=='n'&&b[j+1]=='g'){
        	++i;++j;
            continue ;
        }
        //If a has ng
    	if(i+1<m&&a[i]=='n'&&a[i+1]=='g'){
        	++i;
            if(b[j]>='o')
        	return -1;
        	return 1;
        }
        //If b has ng
    	if(j+1<n&&b[j]=='n'&&b[j+1]=='g'){
        	++j;
            if(a[j]>='o')
        	return 1;
        	return -1;
        }
        ++i;++j;
    }
    if(i==m&&j==n)
    return 0;    
    return i<m?1:-1;		
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<compare_string(s1,s2)<<endl;
		/*
		size_t found;
		found=s1.find("ng");
		while(found!=string::npos){
			s1.replace(found,2,"o");
			if(s2[found]>='o'){
				cout<<"-1";
				goto tag;
			}
			found=s1.find("ng");
		}



		found=s2.find("ng");
		while(found!=string::npos){
			s2.replace(found,2,"o");

			found=s2.find("ng");
		}
		if(s1==s2)
			cout<<"0"<<endl;
		else if(s1>s2)
			cout<<"1"<<endl;
		else
			cout<<"-1"<<endl;
		tag:
		int a;*/
	}
}
