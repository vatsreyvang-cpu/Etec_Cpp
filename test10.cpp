#include<iostream>
using namespace std;

int main(){
	
	string user_name, email, password, confirm_password;
	
	cout<<"\n";
	cout<<"<=====Rigister====>\n";
	cout<<"\n"; 
	
	cout<<"Enter Name  :";getline(cin,user_name);
	if(user_name == "Dara Poy"){
		cout<<"Enter Email  :";cin>>email;
			if(password =="Dara007@gmail.com"){
				cout<<"Enter Password :";cin>>password;
				if(password == "Dara007@123"){
				
				}else{
					cout<<"Invalide Passwor";
				}
				
			}else{
				cout<<"Invalide Email";
			}    
		
	}else{
		cout<<"Invalide User Name";
	}
return 0;
}