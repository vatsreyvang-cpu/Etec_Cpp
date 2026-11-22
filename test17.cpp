#include<iostream>
using namespace std;

int main(){
	
	int new_use, old_use;
	int total_use;
	double pay;
	
	cout<<"\n";
	cout<<"<=============Input data============>\n";
	cout<<"\n";
	cout<<"Enter New Use   =    ";cin>>new_use;
	cout<<"Enter Old Use   =    ";cin>>old_use;
	
	total_use= new_use- old_use;
	
	if(total_use>=1 && total_use<=10){
		pay = total_use*350;
	}else if(total_use>10 && total_use<=20){
		pay=10*350+(total_use - 10)*450;
	}else if(total_use>20 && total_use<=30){
		pay=10*350+10*450+(total_use - 20)*550;
	}else if(total_use>30 && total_use<=40){
		pay=10*350+10*450+10*550+(total_use - 30)*650;
	}else if(total_use>40 && total_use<=50){
		pay=10*350+10*450+10*550+10*650+(total_use - 40)*750;
	}else if(total_use>50 && total_use<=60){
		pay=10*350+10*450+10*550+10*650+10*750+(total_use - 50)*850;
	}else{
		pay=10*350+10*450+10*550+10*650+10*750+10*850+(total_use - 60)*950;	
	}
	
	cout<<"\n";
	cout<<"<============Output Data=============>\n";
	cout<<"\n";
	cout<<"Enter New Use   =    "<<new_use<<"Kw/h"<<endl;
	cout<<"Enter Old Use   =    "<<old_use<<"Kw/h"<<endl;
	cout<<"Enter Total Use =    "<<total_use<<"Kw/h"<<endl;
	cout<<"Enter Pay       =    "<<pay<<"Reil"<<pay/4000<<endl;
	
	return 0;
}