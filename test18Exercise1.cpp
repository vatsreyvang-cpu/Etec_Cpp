#include<iostream>
using namespace std;

int main(){
	int code;
	string name;
	int qty,discount;
	double price;
	float total,payment;
	
	cout<<"\n";
	cout<<"<=========Input Data========>\n";
	cout<<"\n";
	cout<<"Enter Code    :";cin>>code;
	cin.ignore();
	cout<<"Enter Name    :";getline(cin,name);
	cout<<"Enter Qty     :";cin>>qty;
	cout<<"Enter Discount:"<<"%";cin>>discount;
	cout<<"Enter Price   :"<<"$";cin>>price;
	
	total = price*qty;
	
	if (total>=1 && total<=10){
		discount=10;
	}else if(total>10 && total<=20){
		discount=20;
	}else if(total>20 && total<=30){
		discount=30;
	}else if(total>30 && total<=40){
		discount=40;
	}else if(total>40 && total<=50){
		discount=50;
	}else if(total>50 && total<=60){
		discount=60;
	}else{
		discount=70;
	}
	
	payment=total-(total*discount)/100;
	
	cout<<"\n";
	cout<<"<=========Output Data=========>\n";
	cout<<"\n";
	cout<<"Code     :"<<code<<endl;
	cout<<"Name     :"<<name<<endl;
	cout<<"Price    :"<<price<<endl;
	cout<<"Total    :"<<"$"<<total<<endl;
	cout<<"Payment  :"<<"$"<<payment<<endl;
	
	
	return 0;
}