#include<iostream>
using namespace std;

int main(){
	int n1;
	int *array;
	
	cout<<"\n";
	cout<<"Enter numbers of array =";cin>>n1;
	
	array = (int *)calloc(n1, sizeof(int));
	
	cout<<"\n";
	cout<<"<===========Input Value=============>\n";
	cout<<"\n";
	
	for(int i=0; i<n1; i++){
		cout<<"Enter value of array ["<<i<<"] = ";cin>>*(array +i);
	}
	cout<<"\n";
	cout<<"<==========Output Value===========>\n";
	cout<<"\n";
	
	for(int i=0; i<n1; i++){
		cout<<"Value of array["<<i<<"]="<<*(array+i)<<endl;
	}
	int n2;
	
	cout<<"Add number of array =";cin>>n2;
	
	array = (int *)realloc(array, n2* sizeof (int));
	
	cout<<"\n";
	cout<<"<=========Insert Value of array=========>\n";
	cout<<"\n";
	
	for(int i=n2; i<n1+n2; i++){
		cout<<"Enter Value of array["<<i<<"] = ";cin>>*(array+i);
	}
	
	cout<<"<===========Output Value=============>\n";
	cout<<"\n";
	
	for(int i=0; i<n1+n2; i++){
		cout<<"Value of array["<<i<<"] = "<<*(array+i)<<endl;
	}
	return 0;
}