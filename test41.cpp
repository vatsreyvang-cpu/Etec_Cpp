#include<iostream>
using namespace std;

void Sub(){
	
	int a, b;
	cout<<"\n";
	cout<<"Enter A = ";cin>>a;
	cout<<"Enter B = ";cin>>b;
	cout<<"Sum = "<<a-b<<endl;

	
}
 
void Sum(int a, int b){
	cout<<"Sum ="<<a+b;
}
int main(){
	
	Sub();
	int x=5, y=8;
	Sum(x,y);
	
	return 0;
}