#include<iostream>
using namespace std;

int main(){
	
	int id;
	string name, gender;
	string email;
	string position;
	float salary;
	int bouns, tax;
	double total_salary;
	
	cout<<"\n";
	cout<<"<=========Input Data=========>\n";
	cout<<"\n";
	cout<<"Enter ID    :";cin>>id;
	cout<<"Enter Name  :";cin>>name;
	cout<<"Enter Gender:";cin>>gender;
	cout<<"Enter Email :";cin>>email;
	cout<<"Enter Position:";cin>>position;
	cout<<"Enter Salary :";cin>>salary;
	cout<<"Enter Bouns :"<<"$";cin>>bouns;
	
	if(position == "IT"){
		bouns = 30;
		cout<<"IT   :"<<bouns<<endl;
	}else if(position =="Manager"){
		bouns = 25;
	}else if(position == "Engineer"){
		bouns = 30;
	}else{
		bouns = 15;
	} 
	
	
	if(salary<=500){
		tax = 5;
	}else if (salary<=100){
		tax = 10;
	}else if (salary<=1500){
		tax = 15;
	}else{
		tax = 20;
	}
	
	total_salary=salary+ (salary*bouns)/100 -(salary*tax)/100;
	
	cout<<"\n";
	cout<<"<========Output Data=========>\n";
	cout<<"\n";
	cout<<"ID          :"<<id<<endl;
	cout<<"Name        :"<<name<<endl;
	cout<<"Gender      :"<<gender<<endl;
	cout<<"Email       :"<<email<<endl;
	cout<<"Position    :"<<position<<endl;
	cout<<"Salary      :"<<salary<<"$"<<endl;
	cout<<"Bouns       :"<<bouns<<"%"<<endl;
	cout<<"Total salary:"<<total_salary<<"$"<<endl;
		
	return 0;
}