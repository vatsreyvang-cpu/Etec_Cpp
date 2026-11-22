#include<iostream>
using namespace std;
void Array(int n){
	
	int array[n];
	
	cout<<"\n";
	cout<<"<=========INput Value=========>\n";
	
	for(int i=0;i<n;i++){
		cout<<"Enter array["<<i<<"] =";cin>>array[i];
	}
}
int main(){
	
	int x;
	
	cout<<"Enter number of array =";cin>>x;
	
	Array(x);
	return 0;
}