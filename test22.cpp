#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter N:";cin>>n;
	int sign= -1;
	for(int i=0; i<n; i++){
		cout<<( 30*sign )<<" ";
		sign*= -1;
	}
	
	return 0;
}