#include<iostream>
using namespace std;

int main(){
	 
	 int id;
	 string name,gender;
	 int rate,hour;
	 float salary;
	 double total_salary;
	 
	 cout<<"\n";
	 cout<<"<========Input data========>\n";
	 cout<<"\n";
	 cout<<"Enter ID      :";cin>>id;
	 cin.ignore();
	 cout<<"Enter Name    :";getline(cin,name);
	 cout<<"Enter Gender  :",cin>>gender;
	 cout<<"Enter Rate    :";cin>>rate;
	 cout<<"Enter Hour    :";cin>>hour;
	 cout<<"Enter Salary  :";cin>>salary;
	 
	 total_salary=rate*hour+salary;
	 
	 cout<<endl;
	 cout<<"<======Output Data=======>\n";
	 cout<<endl;
	 cout<<"Enter ID      :"<<id<<endl;
	 cout<<"Enter Name    :"<<name<<endl;
	 cout<<"Enter Gender  :"<<gender<<endl;
	 cout<<"Enter Total   :"<<total_salary<<endl;
	 
	return 0;
	
}