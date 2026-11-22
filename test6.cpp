#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int id; 
	string name;
	int quanlity;
	int discount;
	float price;
	double total_price,payment;
	
	cout<<"\n";
	cout<<"<=========INVOICE========>"<<endl;
	cout<<"\n";
	cout<<"Enter ID      :";cin>>id;
	cin.ignore();
	cout<<"Enter Name    :";getline(cin,name);
	cout<<"Enter Quanlity:";cin>>quanlity;
	cout<<"Enter Discount:"<<"%";cin>>discount;
	cout<<"Enter Price   :"<<"$";cin>>price;
	
	total_price=quanlity*price;
	payment=total_price-(total_price*discount/100);
	
	cout<<"\n";
	cout<<"<==========TOTAL===========>"<<endl;
	cout<<"\n";
	cout<<setw(10)<<"ID"
		<<setw(12)<<"Name"
		<<setw(16)<<"Discount"
		<<setw(13)<<"price"
		<<setw(14)<<"Totala"
		<<setw(14)<<"Payment"<<endl;
		
	cout<<setw(10)<<id
		<<setw(12)<<name
		<<setw(16)<<discount
		<<setw(13)<<price
		<<setw(14)<<total_price
		<<setw(14)<<payment<<endl;
		
	
	return 0;
}