#include<iostream>
using namespace std;
 
int main(){
	
	int array[17] = {99, 88, 99, 77, 44, 77, 33, 22, 90, 88, 10, 90, 31, 19};
	
	for(int i=0; i<13; i+=2){
		cout<<array[i]<<", ";
	}
	cout<<"\n";
	for(int i=3; i<14; i+=2){
		cout<<array[i]<<", ";
	}
	return 0;
}