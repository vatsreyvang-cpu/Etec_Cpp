#include<iostream>
using namespace std;

int main(){
	
	int op;
	float num1,num2;
	
	do{
		cout<<"\n";
	cout<<"<=======================>\n";
	cout<<"1. Option +              \n";
	cout<<"2. Option -              \n";
	cout<<"3. Option x              \n";
	cout<<"4. Option /              \n";
	cout<<"<=======================>\n";
	cout<<"Please choose Option    :";cin>>op;
	
	switch(op){ // switch use when we want to choose one option from several possible values
		case 1: { // stor statment
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
	
	}while(op !=0);
	
	return 0;
}