#include<iostream>
using namespace std;
// structure:

struct Student{
	
	int id;
	string name;
	string gender;
	string email;
	string course;
	string term;
	string time;
	string phonenumber;
	
};

int main(){
	
	struct Student s1,s2;
	cout<<"\n";
	cout<<"<===========INPUT DATA1================>\n";
	cout<<"\n";
	
	cout<<"Enter ID       :";cin>>s1.id;
	cout<<"Enter Name     :";cin>>s1.name;
	cout<<"Enter Gender   :";cin>>s1.gender;
	cout<<"Enter Email    :";cin>>s1.email;
	cout<<"Enter Course   :";cin>>s1.course;
	cout<<"Enter Term     :";cin>>s1.term;
	cout<<"Enter Time     :";cin>>s1.time;
	cout<<"Enter Phone    :";cin>>s1.phonenumber;
	
	cout<<"\n";
	cout<<"<===========INPUT DATA2================>\n";
	cout<<"\n";
	
	cout<<"Enter ID       :";cin>>s2.id;
	cout<<"Enter Name     :";cin>>s2.name;
	cout<<"Enter Gender   :";cin>>s2.gender;
	cout<<"Enter Email    :";cin>>s2.email;
	cout<<"Enter Course   :";cin>>s2.course;
	cout<<"Enter Term     :";cin>>s2.term;
	cout<<"Enter Time     :";cin>>s2.time;
	cout<<"Enter Phone    :";cin>>s2.phonenumber;
	
	cout<<"\n";
	cout<<"<===========OUTPUT DATA1================>\n";
	cout<<"\n";
	
	cout<<" ID       :"<<s1.id<<endl;
	cout<<" Name     :"<<s1.name<<endl;
	cout<<" Gender   :"<<s1.gender<<endl;
	cout<<" Email    :"<<s1.email<<endl;
	cout<<" Course   :"<<s1.course<<endl;
	cout<<" Term     :"<<s1.term<<endl;
	cout<<" Time     :"<<s1.time<<endl;
	cout<<" Phone    :"<<s1.phonenumber<<endl;
	
	cout<<"\n";
	cout<<"<===========OUTPUT DATA2================>\n";
	cout<<"\n";
	
	cout<<" ID       :"<<s2.id<<endl;
	cout<<" Name     :"<<s2.name<<endl;
	cout<<" Gender   :"<<s2.gender<<endl;
	cout<<" Email    :"<<s2.email<<endl;
	cout<<" Course   :"<<s2.course<<endl;
	cout<<" Term     :"<<s2.term<<endl;
	cout<<" Time     :"<<s2.time<<endl;
	cout<<" Phone    :"<<s2.phonenumber<<endl;
	
	
	
	return 0;
}