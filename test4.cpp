#include<iostream>
using namespace std;

int main(){
	
	int age;
	string name;
	string gender;
	string address;
	
	cout<<"Enter Age  :";cin>>age;
	cin.ignore();
	cout<<"Enter Name  :";getline(cin, name);
	cout<<"Enter Gender  :";cin>>gender;
	cout<<"Enter Address  :",cin>>address;
	
	return 0;
}