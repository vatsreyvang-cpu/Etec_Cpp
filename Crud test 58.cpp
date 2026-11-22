#include<iostream>
using namespace std;
//CRUD + sort +search +...(need array and loop)
//Cread Read Update Delete
//globle use general

int code[10];
string name[10];
string brand[10];
string category[10];
float price[10];
int quantity[10];

void Input(int n){
	
	cout<<"\n";
	cout<<"<==============Create Product===============>\n";
	
	for(int i=0; i<n; i++){
		
		cout<<"\n";
		cout<<"<===========Product["<<i+1<<"]=================>\n";
		cout<<"Enter Code         :";cin>>code[i];
		cout<<"Enter Name         :";cin>>name[i];
		cout<<"Enter Brand        :";cin>>brand[i];
		cout<<"Enter Category     :";cin>>category[i];
		cout<<"Enter Price        :";cin>>price[i];
		cout<<"Enter Quantity     :";cin>>quantity[i];
		
	}
	cout<<"\n";
	cout<<"Create Product Successfully!\n";
}
void Output(int n){
	
	cout<<"\n";
	cout<<"<=============Get Product===================>\n";
	
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<==============Product["<<i+1<<"]====================\n";
		cout<<"Code                 :"<<code[i]<<endl;
		cout<<"Name                 :"<<name[i]<<endl;
		cout<<"Brand                :"<<brand[i]<<endl;
		cout<<"Category             :"<<category[i]<<endl;
		cout<<"Price                :"<<price[i]<<endl;
		cout<<"Quantity             :"<<quantity[i]<<endl;
	}
	
}
void Search(int n){
	cout<<"\n";
	cout<<"<=============Get Product By Code==============>\n";
	
	int product_code;
	bool check = false;
	
	cout<<"Enter Code of Product = ";cin>>product_code;
	
	for(int i=0; i<n; i++){
		if(product_code==code[i]){
		cout<<"\n";
		cout<<"<==============Product["<<i+1<<"]====================\n";
		cout<<"Code                 :"<<code[i]<<endl;
		cout<<"Name                 :"<<name[i]<<endl;
		cout<<"Brand                :"<<brand[i]<<endl;
		cout<<"Category             :"<<category[i]<<endl;
		cout<<"Price                :"<<price[i]<<endl;
		cout<<"Quantity             :"<<quantity[i]<<endl;
		
		cout<<"\n";
		check=true;
		cout<<"search Product has found!\n";
		
		}
		
	}
	if(!check){
		cout<<"Product not found!!\n";
	}
	  
}

void Update(int n){
	cout<<"\n";
	cout<<"<=============Update Product==============>\n";
	
	int CODE;
	bool check = false;
	
	cout<<"Enter Code of Product to update = ";cin>>CODE;
	
	for(int i=0; i<n; i++){
		if(CODE==code[i]){
		cout<<"\n";
		cout<<"<==============Product["<<i+1<<"]====================\n";
		cout<<"Please Update Product Data \n";
		cout<<"\n";
		
		cout<<"Enter Code         :";cin>>code[i];
		cout<<"Enter Name         :";cin>>name[i];
		cout<<"Enter Brand        :";cin>>brand[i];
		cout<<"Enter Category     :";cin>>category[i];
		cout<<"Enter Price        :";cin>>price[i];
		cout<<"Enter Quantity     :";cin>>quantity[i];
		
		cout<<"\n";
		check=true;
		cout<<"Update Data Successfully!\n";
		
		}
		
	}
	if(!check){
		cout<<"Product not found!!\n";
	}
	
}

void Delete(int &n){
	cout<<"\n";
	cout<<"<=============Delete Product==============>\n";
	
	int CODE;
	bool check = false;
	
	cout<<"Enter Code to Delete Product =";cin>>CODE;
	
	for(int i=0; i<n; i++){
		if(CODE==code[i]){
			for(int j=0; j<n-i; j++){
				code[j]=code[j+1];
				name[j]=name[j+1];
				brand[j]=brand[j+1];
				category[j]=category[j+1];
				price[j]=price[j+1];
				quantity[j]=quantity[j+1];
			}
			n--;
			check = true;
			cout<<"\n";
			cout<<"Delete Data Successfully\n";
			
		}
	}
	if(!check){
		cout<<"Product not Found\n";
		
	}
	
	
}
int main(){
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"<=======================>\n";
		cout<<"1. Create Product        \n";
		cout<<"2. GetAll Product        \n";
		cout<<"3. Get Product By code   \n";
		cout<<"4. Update Product        \n";
		cout<<"5. Delete Product        \n";
		cout<<"6. Exit..................\n";
		cout<<"<=======================>\n";
		cout<<"Please Choose Options=";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter Number of Product = ";
				cin>>n;
				
				Input(n);
				break;
			}
			case 2:{
				
				Output(n);
				
				break;
			}
			case 3:{
				Search(n);
				break;
			}
			case 4:{
				Update(n);
				break;
			}
			case 5:{
				Delete(n);
				break;
			}
		}
		
	}while(op != 6);
	
	return 0;
}