#include<iostream>
using namespace std;
double Fa(double C){
	return(C * 9/5)+32;
	
}
int main(){
	double C;
	cout<<"Enter C=",cin>>C;
	cout<<" F ="<<Fa(C)<<endl;
	
	return 0;
}