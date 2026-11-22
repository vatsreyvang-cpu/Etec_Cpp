#include<iostream>
using namespace std;

int main(){
	
	int array[4][7]={
	{11, 22, 32, 44, 55, 66, 77},
	{88, 99, 10, 11, 12, 13, 14},
	{15, 16, 17, 18, 19, 20, 21},
	{22, 23, 24, 25, 26, 27, 28},
	};
	
	for(int i=0;i<4;i++){
		for(int j=0;j<7;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Array[3][4]="<<array[3][4]<<endl;
	cout<<"Array[0][4]="<<array[0][4]<<endl;
	cout<<"Array[3][1]="<<array[3][1]<<endl;
	cout<<"Array[2][2]="<<array[2][2]<<endl;
	cout<<"Array[3][1]="<<array[3][1]<<endl;
	
	return 0;
}