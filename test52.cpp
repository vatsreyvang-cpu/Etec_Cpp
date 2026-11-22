#include<iostream>
using namespace std;

int main(){
	
	int array[17] = {99, 88, 99, 77, 44, 77, 33, 22, 90, 88, 10, 90, 31, 19};
	
	for(int i=11; i>=0; i-=3){
		cout<<array[i]<<",";
	}
	cout<<"\n";
	for(int i=11; i>0; i-=5){
		cout<<array[i]<<", ";
	}
	
	return 0;
}