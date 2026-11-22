#include<iostream>
using namespace std;
#include<iomanip>
int main(){
	
	int id;
	string name, gender;
	float score1, score2, score3, score4, score5; 
	double total_score, average;
	
	
	cout<<"\n";
	cout<<"<=========Input Data==========>\n";
	cout<<"\n";
	cout<<"Enter ID    :";cin>>id;
	cin.ignore();
	cout<<"Enter Name    :";getline(cin,name);
	cout<<"Enter Gender  :";cin>>gender;
	cout<<"Enter score1  :";cin>>score1;
	cout<<"Enter score2  :";cin>>score2;
	cout<<"Enter score3  :";cin>>score3;
	cout<<"Enter score4  :";cin>>score4;
	cout<<"Enter score5  :";cin>>score5;
	
	
	total_score=score1+score2+score3+score4+score5;
	average=total_score/5;
	
	cout<<"\n";
	cout<<"<========Output Date=========>\n";
	cout<<"\n";
	cout<<setw(12)<<"ID"
		<<setw(14)<<"Name"
		<<setw(16)<<"Gender"
		<<setw(15)<<"Total"
		<<setw(17)<<"Average"<<endl;
		
	cout<<setw(12)<<id
		<<setw(14)<<name
		<<setw(16)<<gender
		<<setw(15)<<total_score
		<<setw(17)<<average;
	
	
	return 0;
}