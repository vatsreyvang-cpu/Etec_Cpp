#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter N:";cin>>n;
	for(int i=96; i>=n; i-=6){
		cout<<i<<endl;
	}
	return 0;
}