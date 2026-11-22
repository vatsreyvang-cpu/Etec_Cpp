#include<iostream>
using namespace std;

int id;
	string name;
	string gender;
	string email;
	float score1, score2, score3,score4;
	
void Input(){
	
	
	cout<<"\n";
	cout<<"=========================\n";
	cout<<"\n";
	cout<<"Enter ID      :";cin>>id;
	cout<<"Enter Name    :";cin>>name;
	cout<<"Enter Gender  :";cin>>gender;
	cout<<"Enter Email   :";cin>>email;
	cout<<"Enter Score1  :";cin>>score1;
	cout<<"Enter Score2  :";cin>>score2;
	cout<<"Enter Score3  :";cin>>score3;
	cout<<"Enter Score4  :";cin>>score4;
}

double Total_score(){
	return score1+score2+score3+score4;
}
int total=Total_score();
double Average(){
	return total/4;
	
}
char Grade(){
	double avg=Average();
	if(avg>=90 && avg<=100){
		return 'A';
	}else if(avg>=80 && avg<90){
		return 'B';
	}else if(avg>=70 && avg<80){
		return 'C';
	}else if(avg>=60 && avg<70){
		return 'D';
	}else if(avg>=50 && avg<60){
		return 'E';
	}else{
		return 'F';
	}
	
}

void Output(){
	cout<<"\n";
	cout<<"=========================\n";
	cout<<"\n";
	cout<<"ID         :"<<id<<endl;
	cout<<"Name       :"<<name<<endl;
	cout<<"Gender     :"<<gender<<endl;
	cout<<"Email      :"<<email<<endl;
	cout<<"Total_score:"<<Total_score()<<endl;
	cout<<"Average    :"<<Average()<<endl;
	cout<<"Grade      :"<<Grade()<<endl;
}
int main(){
	
	Input();
	Output();
	
	return 0;
}