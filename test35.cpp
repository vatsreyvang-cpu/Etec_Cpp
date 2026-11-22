#include<iostream>
#include<math.h>
using namespace std;

int main(){
//1*1+3*3+...+n*n
	 
	 int i,n;
	 int sum=0;
	 cout<<"Enter value of loop= ";cin>>n;
	 
	 for(i=1; i<=n; i+=2){
	 	if(i>1){
	 		cout<<"+";
		}
		cout<<i<<"*"; 
	 	sum += (i*i);
	 }
	
	cout<<"="<<sum;
	return 0;
}