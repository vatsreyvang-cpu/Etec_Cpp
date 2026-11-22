#include<iostream>
using namespace std;
//function has 2 :
//1.NonReturn Function
//2.Rturn Function
//Data tab: int id;varible
//Return tab: int id(); functoin
int id;
string name,gender;
string position;
float salary;
string email;

void Input(){
	
	cout<<"\n";
	cout<<"Enter ID       :";cin>>id;
	cout<<"Enter Name     :";cin>>name;
	cout<<"Enter Gender   :";cin>>gender;
	cout<<"Enter Position :";cin>>position;
	cout<<"Enter Salary   :";cin>>salary;
	cout<<"Enter Email    :";cin>>email;
	

}

int main(){
	
	Input();
	Input();
	Input();
	Input();
	
	return 0;
}