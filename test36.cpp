#include<iostream>
using namespace std;

int main(){
//case use with int and char
	
	int op;
	float num1,num2;
	
	cout<<"\n";
	cout<<"<=======================>\n";
	cout<<"1. Option +              \n";
	cout<<"2. Option -              \n";
	cout<<"3. Option x              \n";
	cout<<"4. Option /              \n";
	cout<<"<=======================>\n";
	cout<<"Please choose Option    :";cin>>op;
	
	switch(op){
		case 1: {
			cout<<"\n";
			cout<<"Enter Num1 = ";cin>>num1;
			cout<<"Enter Num2 = ";cin>>num2;
			cout<<"\n";
			cout<<"Num1 + Num2 ="<<num1 + num2<<endl;
			break;
		}
		default: {  //we use defaul for denial conditions above
			cout<<"\n";
			cout<<"Option not found \n";
			break;
		}
	}
	
	
	return 0;
}