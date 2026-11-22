#include<iostream>
using namespace std;
//Glooble Varaible
int id[10];
string name[10];
string gender[10];
float salary[10];
string position[10];

void Input(int n){
	
	cout<<"\n";
	cout<<"<=======Input Data==========>\n";
	
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<======Employee["<<i+1<<"]==========>\n";
		cout<<"Enter Id        :";cin>>id[i];
		cout<<"Enter Name      :";cin>>name[i];
		cout<<"Enter Gender    :";cin>>gender[i];
		cout<<"Entr Salary     :$";cin>>salary[i];
		cout<<"Enter position  :";cin>>position[i];
		
		
	}
	cout<<"\n";
	cout<<"Create Employee Successfully!\n";
}
void Output(int n){
	
	cout<<"\n";
	cout<<"<===========Output Data==========>\n";
	
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<======Employee["<<i+1<<"]==========>\n";
		cout<<"ID         :"<<id[i]<<endl;
		cout<<"Name       :"<<name[i]<<endl;
		cout<<"Gender     :"<<gender[i]<<endl;
		cout<<"Salary     :"<<salary[i]<<endl;
		cout<<"Position   :"<<position[i]<<endl;
	}
}

int main(){
	
	int op;
	int n;
	
	do{
		cout<<"\n";
		cout<<"=========================\n";
		cout<<"1. Input Data            \n";
		cout<<"2. Output Data           \n";
		cout<<"3. Exit..................\n";
		cout<<"=========================\n";
		cout<<"Please Choose Option = ";cin>>op;
		
		switch(op){
			case 1:{
				cout<<"\n";
				cout<<"Enter number of employee= ";cin>>n;
				
				Input(n);
				
				break;
			}
			case 2:{
				Output(n);
				
				break;
			}
			case 3:{
				cout<<"\n";
				cout<<"Exit.........!";
				break;
			}
			default:{//else kakney no case
				cout<<"\n";
				cout<<"Option not found\n";
				break;
			}
			
		}
	}while(op !=3);
	return 0;
}