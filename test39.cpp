#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int i, size,op, sum=0, product=1;
	
	cout<<"-------MENU--------\n";
	cout<<"1.  Sequence Sum1 \n";
	cout<<"2.  Sequence Sum2 \n";
	cout<<"3.  Factorial Product \n";
	cout<<"---------------------\n";
	cout<<"Input Your Choice: ";cin>>op;
	
	switch(op){
		case 1:{
			cout<<"Input Size: ";cin>>size;
			i=1;
			while(i<=size){
				cout<<i<<"+";
				sum+=i;
				i++;
			}
			cout<<"\b="<<sum<<endl;
			break;
		}
		case 2:{
			cout<<"Input Size: ";cin>>size;
			i=1;
			while(i<=size){
				cout<<i<<"^2+";
				sum+=pow(i,2);
				i++;
			}
			cout<<"\b="<<sum<<endl;
			break;
		}
		case 3:{
			cout<<"Input Size: ";cin>>size;
			i=1;
			while(i<=size){
				cout<<i<<"x";
				product*=i;
				i++;
			}
			cout<<"\b="<<product<<endl;
			break;
		}
	}
	return 0;
}