#include<iostream>
using namespace std;

int main(){
//1+2+3+....+n = sum	
    int i,n,sum=0;
    cout<<"Enter number of loop =";cin>>n;
    for(i=1; i<=n; i++){
    	cout<<i<<"+";
    	sum+=i;//sum=sum+i
	}
	cout<<"\b ="<<sum;//"\b use for delete sign behind system"
	return 0;
}