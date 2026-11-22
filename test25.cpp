#include<iostream>
#include<math.h>
using namespace std;

int main(){
//sin(120)+sin(90)+...+sin(n) = sum	
    int i,n;
	double sum=0;
    cout<<"Enter number of loop =";cin>>n;
    for(i=120; i>=n; i-=30){
    	cout<<"sin("<<i<<") + ";
    	sum+=sin(i*M_PI/180);
	}
	cout<<"\b\b ="<<sum;
	return 0;
}