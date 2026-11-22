#include<iostream>
using namespace std;

int main(){
	
	int id;
	string name,gender;
	char grade;
	float score1, score2, score3,score4, score5;
	double total,average;
	
	cout<<"\n";
	cout<<"<=======Input Data=======>\n";
	cout<<"\n";
	cout<<"Enter ID         :";cin>>id;
	cin.ignore();
	cout<<"Enter Name       :";getline(cin,name);
	cout<<"Enter Gender     :";cin>>gender;
	cout<<"Enter Score1     :";cin>>score1;
	cout<<"Enter Score2     :";cin>>score2;
	cout<<"Enter Score3     :";cin>>score3;
	cout<<"Enter Score4     :";cin>>score4;
	cout<<"Enter Score5     :";cin>>score5;
		
	total=score1+score2+score3+score4+score5;
	average=total/5;
	
	if (average>=90 && average<=100){
		grade='A';
	}else if(average>=80 && average<90){
		grade='B';
	}else if(average>=70 && average<80){
		grade='C';
	}else if(average>=60 && average<70){
		grade='D';
	}else if(average>=50 && average<60){
		grade='E';
	}else{
		grade='F';
	}
	
	cout<<"\n";
	cout<<"<=======Output Data=======>\n";
	cout<<"\n";
	cout<<"ID      :"<<id<<endl;
	cout<<"Name    :"<<name<<endl;
	cout<<"Gender  :"<<gender<<endl;
	cout<<"Grade   :"<<grade<<endl;
	cout<<"Total   :"<<total<<endl;
	cout<<"Average :"<<average<<endl;	
	
	return 0;
}