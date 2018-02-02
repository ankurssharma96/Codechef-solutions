#include<iostream>
#include<map>
using namespace std;
int main(){
	map<char,int> mymap;
	mymap.insert(make_pair('a',100));
	mymap.insert(pair<char,int>('z',200));
	map<char,int>::iterator it=mymap.begin();
	it=mymap.find('z');
	cout<<(*it).first<<it->second<<endl;
	it=mymap.begin();
	cout<<it->first<<it->second<<endl;
	//it=mymap.find(100);
}
