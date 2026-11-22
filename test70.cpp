//1 malloc make ti tang yk pi ke mk brer jea rbos klun eg 
//2 calloc make hz mean value srab 
//3 Realloc make new place
#include<iostream>

using namespace std;

int main(){
	
	int n;
	char *text;
	
	cout<<"\n";
	cout<<"Enter size of value =";cin>>n;
	
	text= (char *)malloc(n*sizeof(char));
	
	cout<<"Pleas text =";cin>>text;
	
	cout<<"Text ="<<text;
	
	return 0;
} 