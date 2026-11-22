#include<iostream>
using namespace std;

int main(){
	
	int code;
	string name;
	string brand, category;
	float price;
	int qty, discount;
	double total_price,payment;
	
	cout<<"\n";
	cout<<"<=========Input Data=========>\n";
	cout<<"\n";
	cout<<"Enter Code    :";cin>>code;
	cout<<"Enter Name    :";cin>>name;
	cout<<"Enter Price   :$";cin>>price;
	cout<<"Enter Brand   :";cin>>brand;
	cout<<"Enter Category:";cin>>category;
	cout<<"Enter Qty     :";cin>>qty;
	cout<<"Enter Discount:";cin>>discount;
	
	total_price = price*qty;
	
	if(total_price <=10){
		discount = 10;
	}else if(total_price <=20){
		discount = 20;
	}else{
		discount = 25;
	}
	payment=total_price-(total_price*discount)/100;
	
	cout<<"\n";
	cout<<"<==========Output data==========>\n";
	cout<<"\n";
	cout<<"Code           :"<<code<<endl;
	cout<<"Name           :"<<name<<endl;
	cout<<"Price          :"<<price<<"$"<<endl;
	cout<<"Brand          :"<<brand<<endl;
	cout<<"Category       :"<<category<<endl;
	cout<<"Qty            :"<<qty<<endl;
	cout<<"Discount       :"<<discount<<"%"<<endl;
	cout<<"Total Price    :"<<total_price<<"$"<<endl;
	cout<<"Payment        :"<<payment<<"$"<<endl;
	return 0;
}