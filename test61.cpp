#include<iostream>
using namespace std;

int main(){
	
	int array[4][7]={
	{11, 22, 32, 44, 55, 66, 77},
	{88, 99, 10, 11, 12, 13, 14},
	{15, 16, 17, 18, 19, 20, 21},
	{22, 23, 24, 25, 26, 27, 28},
	};
//11,22,32,14,55,66,77
//55,12,19,26
//14,12,10,88
//16,18,20
//24,17,10,32
//11,99,17,25
//22, 17, 12, 77
//11, 11, 21


//11,22,32,14,55,66,77
	for(int i=0;i<7;i++){
			cout<<array[0][i]<<" ";
	}
//55,12,19,26
	cout<<endl;
	for(int i=0;i<4;i++){
			cout<<array[i][4]<<" ";
	}
//14,12,10,88
	cout<<endl;
	for(int i=6;i>=0;i-=2){
			cout<<array[1][i]<<" ";
	}
//16,18,20
	cout<<endl;
	for(int i=1;i<6;i+=2){
			cout<<array[2][i]<<" ";
	}
//24,17,10,32
	cout<<endl;
	for(int i=3;i>=0;i--){
			cout<<array[i][2]<<" ";
	}
//11,99,17,25
	cout<<endl;
	for(int i=0;i<4;i++){
			cout<<array[i][i]<<" ";
	}
//
	cout<<endl;
	for(int i=0;i>=3;i+=3){
		int j=i*2;
			cout<<array[i][j]<<" ";
	}  
//22, 17, 12, 77	
	cout<<endl;
	for(int i=3;i>=0; i--){
		int j=(3-i)*2;
			cout<<array[i][j]<<" ";
	}

	return 0;
}