#include<iostream>
using namespace std;

double Sum(double x, double y){
	return x+y;
}
int Sum(int x, int y){
	return x+y;
}

int main(){
	
	cout<<"Sum ="<<Sum(3.88,4.68)<<endl;
	cout<<"Sum ="<<Sum(3,4)<<endl;
	
	return 0;
}