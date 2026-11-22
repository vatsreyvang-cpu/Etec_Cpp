#include<iostream>
using namespace std;

struct User{
	int id;
	string firstname, lastname;
	string email, password;
	string role;
	string phoneNumber;
	string gender;
};

void Create(int &n, struct User obj[]){
	
	cout<<"\n";
	cout<<"<==================Create User================>\n";
	cout<<"Enter number of User = ";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<===============User["<<i<<"]=================>\n";
		cout<<"Enter Id         : ";cin>>obj[i].id;
		cout<<"Enter Firstname  : ";cin>>obj[i].firstname;
		cout<<"Enter Lastname   : ";cin>>obj[i].lastname;
		cout<<"Enter Gender     : ";cin>>obj[i].gender;
		cout<<"Enter Role       : ";cin>>obj[i].role;
		cout<<"Enter PhoneNumber: ";cin>>obj[i].phoneNumber;
		cout<<"Enter Email      : ";cin>>obj[i].email;
		cout<<"Enter Password   : ";cin>>obj[i].password;
	
	}
}
void GetAll(int &n, struct User obj[]){
	
	cout<<"\n";
	cout<<"<==================GetAll User================>\n";
	cout<<"Enter number of User = "<<n<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<===============User["<<i<<"]=================>\n";
		cout<<"Id         : "<<obj[i].id<<endl;
		cout<<"Name       : "<<obj[i].firstname<<" "<<obj[i].lastname<<endl;
		cout<<"Gender     : "<<obj[i].gender<<endl;
		cout<<"Role       : "<<obj[i].role<<endl;
		cout<<"PhoneNumber: "<<obj[i].phoneNumber<<endl;
		cout<<"Email      : "<<obj[i].email<<endl;
		cout<<"Password   : "<<obj[i].password<<endl;
	
	}
}
void GetOne(int &n, struct User obj[]){
	
	int ID;
	bool check = false;
	
	cout<<"\n";
	cout<<"Enter ID of User  : ";cin>>ID;
	
	for(int i=0; i<n; i++){
		if( ID == obj[i].id){
		
		cout<<"\n";
		cout<<"User has found\n";
		cout<<"\n"; 
		
		cout<<"<===============User["<<i<<"]=================>\n";
		cout<<"Id         : "<<obj[i].id<<endl;
		cout<<"Name       : "<<obj[i].firstname<<" "<<obj[i].lastname<<endl;
		cout<<"Gender     : "<<obj[i].gender<<endl;
		cout<<"Role       : "<<obj[i].role<<endl;
		cout<<"PhoneNumber: "<<obj[i].phoneNumber<<endl;
		cout<<"Email      : "<<obj[i].email<<endl;
		cout<<"Password   : "<<obj[i].password<<endl;
		
		cout<<"\n";
		check = true;
		}
	}
	cout<<"Found user successfully\n";
	if(!check){
		cout<<"User not Found\n";
	}

}
void Update(int n, struct User obj[]){
	int ID;
	bool check = false;
	
	cout<<"\n";
	cout<<"Enter Update of User  : ";cin>>ID;
	
	for(int i=0; i<n;i++){
		if( ID==obj[i].id){
			
		cout<<"\n";
		cout<<"User has found\n";
		cout<<"\n";
		
		cout<<"<===============User["<<i<<"]=================>\n";
		cout<<"Enter Id         : ";cin>>obj[i].id;
		cout<<"Enter Firstname  : ";cin>>obj[i].firstname;
		cout<<"Enter Lastname   : ";cin>>obj[i].lastname;
		cout<<"Enter Gender     : ";cin>>obj[i].gender;
		cout<<"Enter Role       : ";cin>>obj[i].role;
		cout<<"Enter PhoneNumber: ";cin>>obj[i].phoneNumber;
		cout<<"Enter Email      : ";cin>>obj[i].email;
		cout<<"Enter Password   : ";cin>>obj[i].password;
		
		cout<<"\n";
		check=true;
		}
	cout<<"User update successfully\n";
	if(!check){
		cout<<"User not Update\n";
	}
}
}
//delete
void Delete(int &n, struct User obj[]){
	int ID;
	bool check = false;
	
	cout<<"\n";
	cout<<"Enter Id of User to delete  : ";cin>>ID;
	
	for(int i=0; i<n;i++){
		if( ID==obj[i].id){
			for(int j=0; j<n-i; i++){
				obj[j]=obj[j+1];
			}
			cout<<"\n";
			cout<<"User update successfully\n";
			check=true;
			n--;
			
		}
	if(!check){
		cout<<"User not Update\n";
	}
	}
}


int main (){
	
	struct User obj[20];
	int n = 0;
	int op;
	
	do{
		cout<<"\n";
		cout<<"<=====================>\n";
		cout<<"1. Create user         \n";
		cout<<"2. Get all user        \n";
		cout<<"3. Get one user        \n";
		cout<<"4. Update user         \n";
		cout<<"5. Delete user         \n";
		cout<<"6. Sort uaer by ID     \n";
		cout<<"7. Add user            \n";
		cout<<"8. User login          \n";
		cout<<"9. Exite               \n";
		cout<<"<=====================>\n";
		cout<<"\n";
		cout<<"Please Choose option  =";cin>>op;
		
		switch(op){
			case 1:{
				Create(n , obj);
				break;
			}
			case 2:{
				GetAll(n, obj);
				break;
			}
			case 3:{
				GetOne(n , obj);
				break;
			}
			case 4:{
				Update(n, obj);
				break;
			}
			case 5:{
				Delete(n,obj);
				break;
			}
		}
	}while(op != 9);
	
	return 0;
}