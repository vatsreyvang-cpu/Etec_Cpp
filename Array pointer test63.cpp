#include<iostream>
using namespace std;

int main(){
	int a = 9;
	int *p=&a;
	
	cout<<"\n";
	cout<<"Value of a = "<<a<<endl;
	cout<<"Value of pointer="<<*p<<endl;
	cout<<"\n";
	cout<<"Address of A        ="<<&a<<endl;
	cout<<"Address of value    ="<<p<<endl;
	cout<<"Address off pointer ="<<&p<<endl;
	
	
	
	return 0;
}