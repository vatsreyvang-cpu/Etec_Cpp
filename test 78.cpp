#include<iostream>
#include<cstring>
using namespace std;

struct Product{
	int id;
	char name[50];
	int quantity;
	float price;
	char brand[50];
	char category[50];
	
};

void Create(int &n, struct Product p[]);
void GetAll(int n, struct Product p[]);
void SelectBrands(int n, struct Product p[]);
void SelectCategory(int n, struct Product p[]);
void SelectPrice(int n, struct Product p[]);
void GetOne(int n, struct Product p[]);
void Update(int n, struct Product p[]);
void Delete(int &n, struct Product p[]);
void SortByID(int n, struct Product p[]);
void SortByprice(int n, struct Product p[]);

int main(){
	
	struct Product obj[50];
	int n,op;
	
	do{
		cout<<"\n";
		cout<<"<=============================>\n";
		cout<<"1. Creat Product               \n";
		cout<<"2. Get All Products            \n";
		cout<<"3. Select Brand of Product     \n";
		cout<<"4. Select Category of Products \n";
		cout<<"5. Select Price of Products    \n";
		cout<<"6. Get Product by ID           \n";
		cout<<"7. Update Product by ID        \n";
		cout<<"8. Delete Product by ID        \n";
		cout<<"9. Sort Product by ID          \n";
		cout<<"10.Sort Product by price       \n";
		cout<<"11.Exit the program            \n";
		cout<<"<=============================>\n";
		
		cout<<"\n";
		cout<<"Please choose option:";cin>>op;
		
		switch(op){
			case 1:{
				Create(n, obj);
				break;
			}
			case 2:{
				GetAll(n, obj);
				break;
			}
			case 3:{
				SelectBrands(n, obj);
				break;
			}
			case 4:{
				SelectCategory(n, obj);
				break;
			}
			case 5:{
				SelectPrice(n, obj);
				break;
			}
		}
	}while(op!=0);
	return 0;
}
void Create(int &n, struct Product p[]){
	
	cout<<"\n";
	cout<<"<=================Create Product===============>\n";
	cout<<"\n";
	cout<<"Enter number of product to create= ";cin>>n;
	
	for(int i=0; i<n; i++){
		
		cout<<"\n";
		cout<<"<=========Product["<<i+1<<"]=======>\n";
		cout<<"Enter ID             :";cin>>p[i].id;
		cout<<"Enter Name           :";cin>>p[i].name;
		cout<<"Enter Brand          :";cin>>p[i].brand;
		cout<<"Enter Category       :";cin>>p[i].category;
		cout<<"Enter Price          :";cin>>p[i].price;
		cout<<"Enter Quantity       :";cin>>p[i].quantity;	
	}
	cout<<"\n";
	cout<<"Create Product Successfuly.\n";
}
void GetAll(int n, struct Product p[]){
	cout<<"\n";
	cout<<"<==================GetAll Product================>\n";
	
	for(int i=0; i<n; i++){
		
		cout<<"\n";
		cout<<"<=========Product["<<i+1<<"]=======>\n";
		cout<<" ID             :"<<p[i].id<<endl;
		cout<<" Name           :"<<p[i].name<<endl;
		cout<<" Brand          :"<<p[i].brand<<endl;
		cout<<" Category       :"<<p[i].category<<endl;
		cout<<" Price          :"<<p[i].price<<endl;
		cout<<" Quantity       :"<<p[i].quantity<<endl;
		
		if(p[i].quantity>=20){
			cout<<"Product Status :"
				<<"\033[33mIn Stock\033[0m"<<endl;
		}else if(p[i].quantity<20 && p[i].quantity>=1){
			cout<<"Product Status :"
				<<"\033[33mLow Stock\033[0m"<<endl;
		}else{
			cout<<"Product Status :"
				<<"\033[33mOut Of Stock\033[0m"<<endl;
		}
	}
}
void SelectBrands(int n, struct Product p[]){
	
	cout<<"\n";
	cout<<"<=============Product Brand============>\n";
	
	char Brand[50];
	bool check=false;
	
	cout<<"\n";
	cout<<"<=======Lists Brand=========>\n";
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<p[i].brand<<endl;
	}
	
	cout<<"\n";
	cout<<"Select Brand of Product : ";cin>>Brand;
	
	for(int i=0; i<n; i++){
		if(strcmp(Brand, p[i].brand)==0){
			cout<<"\n";
			cout<<"<=========Product["<<i+1<<"]=======>\n";
			cout<<" ID             :"<<p[i].id<<endl;
			cout<<" Name           :"<<p[i].name<<endl;
			cout<<" Brand          :"<<p[i].brand<<endl;
			cout<<" Category       :"<<p[i].category<<endl;
			cout<<" Price          :"<<p[i].price<<endl;
			cout<<" Quantity       :"<<p[i].quantity<<endl;
			
			if(p[i].quantity>=20){
				cout<<"Product Status :"
					<<"\033[33mIn Stock\033[0m"<<endl;
			}else if(p[i].quantity<20 && p[i].quantity>=1){
				cout<<"Product Status :"
					<<"\033[33mLow Stock\033[0m"<<endl;
			}else{
				cout<<"Product Status :"
					<<"\033[33mOut Of Stock\033[0m"<<endl;
			}
			check=true;
			cout<<"\n";
			cout<<"Select Brand Successfully\n";
		}
	}
	if(!check){
		cout<<"Brand no Found\n";
	}
}
void SelectCategory(int n, struct Product p[]){
	cout<<"\n";
	cout<<"<=============Product Category============>\n";
	
	char Category[50];
	bool check=false;
	cout<<"\n";
	cout<<"<=======Lists Category=========>\n";
	cout<<"\n";
	for(int i=0; i<n; i++){
		cout<<p[i].category<<endl;
	}
	
	cout<<"\n";
	cout<<"Select Category of Product : ";cin>>Category;
	
	for(int i=0; i<n; i++){
		if(strcmp(Category , p[i].category)==0){
			cout<<"\n";
			cout<<"<=========Product["<<i+1<<"]=======>\n";
			cout<<" ID             :"<<p[i].id<<endl;
			cout<<" Name           :"<<p[i].name<<endl;
			cout<<" Brand          :"<<p[i].brand<<endl;
			cout<<" Category       :"<<p[i].category<<endl;
			cout<<" Price          :"<<p[i].price<<endl;
			cout<<" Quantity       :"<<p[i].quantity<<endl;
			
			if(p[i].quantity>=20){
				cout<<"Product Status :"
					<<"\033[33mIn Stock\033[0m"<<endl;
			}else if(p[i].quantity<20 && p[i].quantity>=1){
				cout<<"Product Status :"
					<<"\033[33mLow Stock\033[0m"<<endl;
			}else{
				cout<<"Product Status :"
					<<"\033[33mOut Of Stock\033[0m"<<endl;
			}
			check=true;
			cout<<"\n";
			cout<<"Select Category Successfully\n";
		}
	}
	if(!check){
		cout<<"Category no Found\n";
	}
}
void SelectPrice(int n, struct Product p[]){
	cout<<"\n";
	cout<<"<=============Price of Product============>\n";
	
	cout<<"\n";
	int op;
	bool check = false;
	
	cout<<"Select options Price : ";cin>>op;
	
	do{
		for(int i=0; i<n; i++){
			cout<<"\n";
			cout<<"<Price of Product>\n";
			cout<<"1. Product 1-50$ \n";
			cout<<"2. Product 50-150$ \n";
			cout<<"3. Product 150-300$ \n";
			cout<<"4. Product 300-500$ \n";
			cout<<"5. Product 500$ \n";		
		}
		switch(op){
			case 1:{
				cout<<"\n";
				for(int i=0; i<n; i++){
					if(p[i].price >=1 && p[i].price <= 50){
						cout<<"\n";
						cout<<"1. Product 1-50$\n";
						cout<<"\n";
						
						cout<<" ID             :"<<p[i].id<<endl;
						cout<<" Name           :"<<p[i].name<<endl;
						cout<<" Brand          :"<<p[i].brand<<endl;
						cout<<" Category       :"<<p[i].category<<endl;
						cout<<" Price          :"<<p[i].price<<endl;
						cout<<" Quantity       :"<<p[i].quantity<<endl;
					if(p[i].quantity>=20){
						cout<<"Product Status :"
							<<"\033[33mIn Stock\033[0m"<<endl;
					}else if(p[i].quantity<20 && p[i].quantity>=1){
						cout<<"Product Status :"
							<<"\033[33mLow Stock\033[0m"<<endl;
					}else{
						cout<<"Product Status :"
							<<"\033[33mOut Of Stock\033[0m"<<endl;
					}
					check=true;
					cout<<"\n";
					cout<<"Select Category Successfully\n";	
					}
				}
				if(!check){
					cout<<"Price Not Found";
				}
				break;
			}
		}
	}while(op != 5);
}

