#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"\n";
	cout<<"Enter A  =";cin>>a;
	cout<<"Enter B  =";cin>>b;
	cout<<"Enter C  =";cin>>c;
	
	if(a>b && a>c){
		cout<<"Max value is :"<<a<<endl;
	}else if(b>a && b>c){
		cout<<"Max value is :"<<b<<endl;
	}else{
		cout<<"Max value is :"<<c<<endl;
	}
	return 0;
}

