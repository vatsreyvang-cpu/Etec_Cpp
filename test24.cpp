#include<iostream>
#include<math.h>
using namespace std;

int main(){
//cos(0)+cos(30)+...+cos(n) = sum	
    int i,n;
	double sum=0;
    cout<<"Enter number of loop =";cin>>n;
    for(i=0; i<=n; i+=30){
    	cout<<"cos("<<i<<") + ";
    	sum+=cos(i*M_PI/180);//sum=sum+i
	}
	cout<<"\b\b ="<<sum;//"\b use for delete sign behind system"
	return 0;
}