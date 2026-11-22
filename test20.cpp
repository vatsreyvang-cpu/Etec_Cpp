#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	
	system("color F1");
	SetConsoleOutputCP(CP_UTF8);
	
	int i;
	for (i=1; i<=10; i++){
		cout<<"Hello World\u2764\uFE0F\U0001F49B\n";
	}
	
	return 0;
}