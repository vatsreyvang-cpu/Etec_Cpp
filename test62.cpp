#include<iostream>
using namespace std;

int main(){
	char array[7][7]={
	{'I','E','H','H','A','M','V'},
	{'S','L','G','E','L','K','Y'},
	{'Y','D','O','T','L','O','S'},
	{'G','G','V','V','S','L','Y'},
	{'B','N','O','L','E','R','O'},
	{'P','O','S','I','L','U','B'},
	{'R','B','U','N','P','L','P'},
	};
	cout<<"2D array"<<endl;
//l,l,l,V,D,S
//i=123456
//j=012345
	for(int i=7; i>0; i--){
		int j=i-1;
		cout<<array[i][j]<<" ";
	}
	cout<<"\n";
	
//Y,O,S,L,S,B
//i=123456
//j=654321
	for(int i=1; i<7; i++){
		int j=7-i;
		cout<<array[i][j]<<" ";
	}
	cout<<"\n";
//O,V,K
//i=531
//j=135
	for(int i=5; i>0; i-=2){
		int j=6-i;
		cout<<array[i][j]<<" ";
	}
	cout<<"\n";
	
//M,T,N
//i=024
//j=531
	for(int i=0; i<6; i+=2){
		int j=5-i;
		cout<<array[i][j]<<" ";
	}
	cout<<"\n";
	
//I,L,O,V,E,U
//i=0123456
//j=0123456
	for(int i=0; i<6; i++){
		int j=i;
		cout<<array[i][j]<<" ";
	}
	cout<<"\n";
	
//B,S,O,L,E,U
//i=654321
//j=123456
	for(int i=6; i>0; i--){
		int j=7-i;
		cout<<array[i][j]<<" ";
	}
	cout<<"\n";
	
//POY
//i=643
//j=666
	for(int i=3; i>=6; i++){
		
		cout<<array[6][i]<<" ";
	}
	cout<<"\n";
	return 0;	
}