#include<iostream>
using namespace std;

int main(){
//10 11 12...n = output odd number
	
	int i,n;
	cout<<"Enter N:";cin>>n;
	for(i=10; i<=n; i++){
		if(i%2 != 0){
			cout<<i<<endl;
		}
	}	
	
	
	return 0;
}