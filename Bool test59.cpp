#include<iostream>
using namespace std;
int main()
{
	int array[40];
	int n, op;
	
	do{
		cout<<"\n";
		cout<<"1. Input Value         \n";
		cout<<"2. Output Value        \n";
		cout<<"3. Find Value by index \n";
		cout<<"4. Update Value        \n";
		cout<<"5. Delete Value        \n";
		cout<<"6. Sort Value          \n";
		cout<<"7. Exit............... \n";
		cout<<"\n";
		cout<<"Please choose options : ";cin>>op;
		switch(op){
			case 1: {
				cout<<"\n";
				cout<<"=========Input Value=========\n";
				cout<<"\n";
				cout<<"Enter numbers of array = ";cin>>n;
				
				for(int i=0; i<n; i++){
					cout<<"Enter Value["<<i<<"]=";cin>>array[i];
					
				}
				cout<<"\n";
				cout<<"Create Value successfully\n";
				
				break;
			}
			case 2:{
				cout<<"\n";
				cout<<"=============Output Value===========\n";
				cout<<"\n";
				
				for(int i=0; i<n; i++){
					cout<<"array["<<i<<"] ="<<array[i]<<endl;
					
				}
				break;
			}
			case 3:{
				cout<<"\n";
				cout<<"=================Search Value by index==============\n";
				
				int index;
				bool check=false;
				
				cout<<"Enter index of array Search=";cin>>index;
				
				for(int i=0; i<n; i++){
					if(index == i){
						cout<<"Value of array["<<i<<"]="<<array[i]<<endl;
						check=true;
						cout<<"\n";
						cout<<"Value has found\n";
						
					}
				}
				if(!check){
					cout<<"Index not Found\n";
				}
				break;
			}
			case 4:{
				cout<<"\n";
				cout<<"==============Update Value========\n";
				
				int index;
				bool check=false;
				
				cout<<"Enter index of array update=";cin>>index;
				
				for(int i=0; i<n; i++){
					
					if(index ==i){
						cout<<"Enter Value of array["<<i<<"]=";cin>>array[i];
						check=true;
						cout<<"\n";
						cout<<"Value Update Index successfully\n";
					}
				}
				if(!check){
					cout<<"Index not Update successfully\n";
				}
				break;
			}
			case 5:{
				cout<<"\n";
				cout<<"==============Update Value========\n";
				
				int index;
				bool check=false;
				
				cout<<"Enter index of array update=";cin>>index;
				
				for(int i=0; i<n; i++){
					if(index == i);
					for(int j=i; j<n-i; j++){
						array[j]=array[j+i];
						
					}
					n--;
					check=true;
					cout<<"\n";
					cout<<"Delete Value successfully\n";
				}
				if(!check){
					cout<<"Index of array not delete successfully\n";
				}
				break;
			}
			
		}
	}while(op !=7);
	
	return 0;
}