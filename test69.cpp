#include<iostream>
using namespace std;

int main(){
	
	int *p;
	
	p=(int *)malloc(sizeof(int));
	
	cout<<"Enter Value of pointer =";cin>>*p;
	
	cout<<"Value of pointer="<<*p;
	
	return 0;
}