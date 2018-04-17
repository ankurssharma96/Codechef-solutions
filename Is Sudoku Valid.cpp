#include<iostream>
using namespace std;
int a[9][9];
int flag=0;

bool check_row(int i,int j){
	int val=a[i][j];
	for(int p=0;p<9;p++){
		if(p==j)
			continue;
		else{
			if(a[i][p]==val)
			return true;
		}
	}
	return false;
}
bool check_col(int i,int j){
	int val=a[i][j];
	for(int p=0;p<9;p++){
		if(p==i)
			continue;
		else{
			if(a[p][j]==val)
			return true;
		}
	}
	return false;
}
bool check_box(int i,int j){
	int val=a[i][j];
	int box=0;
	if(j<=2){
		if(i<=2){
			box=1;	
		}
		else if(i<=5){
			box=4;
		}
		else{
			box=7;
		}
	}
	else if(j<=5){
		if(i<=2){
			box=2;	
		}
		else if(i<=5){
			box=5;
		}
		else{
			box=8;
		}
	}
	else{
		if(i<=2){
			box=3;	
		}
		else if(i<=5){
			box=6;
		}
		else{
			box=9;
		}
	}
	
	switch(box){
		case 1:{
			for(int p=0;p<3;p++){
				for(int q=0;q<3;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		case 2:{
			for(int p=0;p<3;p++){
				for(int q=3;q<6;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		case 3:{
			for(int p=0;p<3;p++){
				for(int q=6;q<9;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		
		
		
		case 4:{
			for(int p=3;p<6;p++){
				for(int q=0;q<3;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		case 5:{
			for(int p=3;p<6;p++){
				for(int q=3;q<6;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		case 6:{
			for(int p=3;p<6;p++){
				for(int q=6;q<9;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		
		
		
		case 7:{
			for(int p=6;p<9;p++){
				for(int q=0;q<3;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		case 8:{
			for(int p=6;p<9;p++){
				for(int q=3;q<6;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		case 9:{
			for(int p=6;p<9;p++){
				for(int q=6;q<9;q++){
					if(p==i && q==j)
						continue;
					else if(a[p][q]==val){
						return true;
					}
				}
			}
			break;
		}
		
	}
	
	return false;
}


void fun(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(a[i][j]){
				if(check_row(i,j) || check_col(i,j) || check_box(i,j)){
					flag=1;
					return;
				}
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cin>>a[i][j];
			}
		}
		flag=0;
		fun();
		if(flag==1)
			cout<<"0"<<endl;
		else
			cout<<"1"<<endl;
	}
}
