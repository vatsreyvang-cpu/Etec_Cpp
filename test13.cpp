#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	int max;
	
	cout<<"\n";
	cout<<"Enter A  =";cin>>a;
	cout<<"Enter B  =";cin>>b;
	cout<<"Enter C  =";cin>>c;
	
	max=(a>b && a>c)? a:
		(b>a && b>c)? b: c;
	cout<<"Max value is ="<<max;
		
		
	return 0;
}