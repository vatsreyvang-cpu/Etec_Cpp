#include<iostream>
using namespace std;

int main(){
//10-9-8-7-..-n
	int i,n;
	int sum=0;
	cout<<"Enter N=";cin>>n;
	for(i=10; i>=n; i--){
		if(i==10){
			sum +=i;
		}else{
			sum -=i;
		}
		cout<<i<<"-";
	}
	cout<<"\b="<<sum;
	return 0;
}