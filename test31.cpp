#include<iostream>
using namespace std;

int main(){
//30 27 ...n = output even numbers	
	int i,n;
	cout<<"Enter N:";cin>>n;
	for(i=30; i>=n; i-=3){
		cout<<i<<endl;
	}
	
	return 0;
}