#include<iostream>
using namespace std;

int main(){
//2+4+6...+n=sum
	
	int i,n;
	int sum=0;
	cout<<"Enter number of loop:";cin>>n;
	for(i=2; i<=n; i+=2){
		cout<<i<<"+";
		sum+=1;
	}
	cout<<"\b ="<<sum;
	return 0;
}