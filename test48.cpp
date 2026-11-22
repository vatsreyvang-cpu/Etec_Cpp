#include<iostream>
using namespace std;

void Sum(int n){
	int sum=0;
	for(int i=3; i<=n; i+=3){
		cout<<i<<"+";
		sum+=i;
	}
	cout<<"\b ="<<sum;
}
int main(){
	int n;
	cout<<"Enter number of loop = ";cin>>n;
	
	Sum(n);
	
	return 0;
}