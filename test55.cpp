#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter number of array =";cin>>n;
	int nums[n];
	
	for (int i=0; i<n; i++){
		cout<<"Enter nums["<<i<<"]=";cin>>nums[i];
	}
	cout<<"\n";
	cout<<"<==========Output Value=============>\n";
	
	for(int i=0; i<n;i++){
		cout<<"Nums["<<i<<"]="<<nums[i]<<endl;
		
	}
	
	return 0;
}