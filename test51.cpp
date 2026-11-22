#include<iostream>
using namespace std;
 
int main(){
	
	int array[9] = {88, 43, 55, 43, 88, 98, 32, 43, 55};
	
	for(int i=0; i<10; i+=2){
		cout<<array[i]<<" ";
	}
	cout<<"\n";
	for(int i=2; i<10; i+=3){
		cout<<array[i]<<" ";
	}
	return 0;
}