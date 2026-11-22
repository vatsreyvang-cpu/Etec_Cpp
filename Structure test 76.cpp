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
void Display(int &n, struct User obj[]){
	
	cout<<"\n";
	cout<<"<==================Display User================>\n";
	cout<<"Enter number of User = "<<n<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"\n";
		cout<<"<===============User["<<i<<"]=================>\n";
		cout<<"Enter Id         : "<<obj[i].id<<endl;
		cout<<"Enter Firstname  : "<<obj[i].firstname<<endl;
		cout<<"Enter Lastname   : "<<obj[i].lastname<<endl;
		cout<<"Enter Gender     : "<<obj[i].gender<<endl;
		cout<<"Enter Role       : "<<obj[i].role<<endl;
		cout<<"Enter PhoneNumber: "<<obj[i].phoneNumber<<endl;
		cout<<"Enter Email      : "<<obj[i].email<<endl;
		cout<<"Enter Password   : "<<obj[i].password<<endl;
	
	}
}

int main(){
	
	struct User obj[20];
	int n = 0;
	
	Create(n, obj);
	Display(n,obj);
	
	
	
	return 0;
}