#include<iostream>
using namespace std;

void Swap(int &x, int &y){
	
	int c=x;
		x=y;
		y=c;
}
int main(){
	
	int a=9, b=7;
	cout<<"\n";
	cout<<"Before Swap a= "<<a<<"     b="<<b<<endl;
	Swap(a,b);
	cout<<"After Swap a= "<<a<<"      b="<<b<<endl;
	
	return 0;
}