#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"\n";
	cout<<"Enter A  =";cin>>a;
	cout<<"Enter B  =";cin>>b;
	
	if(a>b){
		cout<<"A is bigger than B";
	}else if(a<b){
		cout<<"B is bigger than A";
	}else{
		cout<<"A is equal B";
	}
		
	return 0;
}