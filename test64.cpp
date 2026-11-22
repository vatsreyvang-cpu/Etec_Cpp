#include<iostream>
using namespace std;

int main(){
	int  a,b;
	int *p1 = &a;
  	int *p2 = &b;
  
	cout<<"\n";
	cout<<"<==============Input Value==========>\n";
	cout<<"Enter value of *p1= ";cin>>*p1;
	cout<<"Enter value of *p2= ";cin>>*p2;
	  
	cout<<"\n";
	cout<<"<=============Output Value===========>\n";
	cout<<"Value of a = "<<a<<endl;
	cout<<"Value of b = "<<b<<endl;
		
	
	return 0;
}