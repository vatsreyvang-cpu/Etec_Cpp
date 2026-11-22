#include<iostream>
using namespace std;

void Sum(int n){
	
	int sum=0;
	for(int i=2; i<=n; i++){
		cout<<i<<"+";
		sum +=i;
	}
	cout<<"\b = "<<sum;
}

int main(){
	
	int n;
	
	cout<<"Enter number of loop =";cin>>n;
	Sum(n);
	
	return 0;
}