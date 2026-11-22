#include<iostream>
using namespace std;

int id;
string name;
string brand;
string category;
float price;
int quantity;

void Input(){
	cout<<"\n";
	cout<<"<==========Input Data================>\n";
	cout<<"\n";
	cout<<"Enter ID       :";cin>>id;
	cout<<"Enter Name     :";cin>>name;
	cout<<"Enter Brand    :";cin>>brand;
	cout<<"Enter Category :";cin>>category;
	cout<<"Enter Price    :"<<"$";cin>>price;
	cout<<"Enter Quantity :";cin>>quantity;
	
}

double Total_price(){
	return price*quantity;
}

int Discount(){
	
	double total=Total_price();
	if(total <=10){
		return 10;
	}else if(total <=20){
		return 20;
	}
}
void Output(){

	cout<<"\n";
	cout<<"<==============Output Data=============>\n";
	cout<<"\n";
	cout<<"ID         :"<<id<<endl;
	cout<<"Name       :"<<name<<endl;
	cout<<"Brand      :"<<brand<<endl;
	cout<<"Price      :"<<price<<endl;
	cout<<"Total      :"<<Total_price()<<endl;
	cout<<"Discount   :"<<Discount()<<endl;
}

int main(){

	Input();
	Output();
	
	return 0;
}