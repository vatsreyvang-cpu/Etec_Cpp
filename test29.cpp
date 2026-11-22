#include<iostream>
using namespace std;

int main(){
//10 0 -10 -20 ...n
	int i,n;
	cout<<"Enter N:";cin>>n;
	for(i=10; i>=n; i-=10){
		cout<<i<<endl;
	}	
	
	
	return 0;
}