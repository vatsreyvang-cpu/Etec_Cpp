#include<iostream>

using namespace std;

int main(){
	int n;
	int *array;
	
	cout<<"\n";
	cout<<"Enter Number ot array =";cin>>n;
	
	array=(int *)calloc(n, sizeof(int));
	
	cout<<"\n";
	for(int i=0; i<n; i++){
		cout<<"Value of array ["<<i<<"]="<<array[i]<<endl;
	}	
	return 0;
}