#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int n;
//3 6 9 12 15 
	for(int i=3; i<=15;i+=3){
		cout<<i<<endl;
	}
	cout<<"\n--------------------\n";
//1->15=output odd number

	for(int i=1; i<=15; i++){
		if(i%2 != 0){
			cout<<i<<endl;
		}
	}
	cout<<"\n--------------------\n";
//91->45=output even number	
	for(int i=91; i>=45; i--){
		if(i%2 == 0){
			cout<<i<<endl;
		}
	}
	cout<<"\n--------------------\n";
//100 95 90 ....n

	cout<<"Enter N:";cin>>n;
	for(int i=100; i>=n; i-=5){
		cout<<i<<"\t";
	}
	cout<<"\n--------------------\n";
//-30 30 .....n	

	cout<<"Enter N:";cin>>n;
	int sign= -1;
	for(int i=0; i<n; i++){
		cout<<( 30*sign )<<" ";
		sign*= -1;
	}
	cout<<"\n--------------------\n";
//96 90 84 78 ... n
	cout<<"Enter N:";cin>>n;
	for(int i=96; i>=n; i-=6){
		cout<<i<<endl;
	}
	cout<<"\n--------------------\n";
//1+2+3+....+n = sum
	
	int sum=0;
    cout<<"Enter number of loop =";cin>>n;
    for(int i=1; i<=n; i++){
    	cout<<i<<"+";
    	sum+=1;//sum=sum+i
	}
	cout<<"\b ="<<sum;
	cout<<"\n--------------------\n";
//cos(0)+cos(30)+...+cos(n) = sum
 	
	double sum=0;
    cout<<"Enter number of loop =";cin>>n;
    for(i=0; i<=n; i+=30){
    	cout<<"cos("<<i<<") + ";
    	sum+=cos(i*M_PI/180);
	}
	cout<<"\b\b ="<<sum;
	
	return 0;
}