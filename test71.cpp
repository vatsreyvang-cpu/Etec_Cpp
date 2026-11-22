#include<iostream>

using namespace std;

int main(){
	
	int n; 
	int *array;
	
	cout<<"\n";
	cout<<"Enter number of array=";cin>>n;
	
	array=(int *)malloc(n*sizeof(int ));
	
	for(int i=0; i<n; i++){
		cout<<"Enter array pointer =";cin>>*(array+i);
	}
	cout<<"\n";
	cout<<"	Address of *array="<<&array<<endl;
	for(int i=0;i<n;i++){
		cout<<"Value of array pointer ="<<*(array+i)<<endl;
	}
	return 0;
}