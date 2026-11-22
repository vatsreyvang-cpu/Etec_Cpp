#include<iostream>
using namespace std;

int main(){
  
  int array[20] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = array;
  
  cout<<"\n";
  cout<<"Output value of array using pointer\n";
  cout<<"Value of array[0] "<<*(p+0)<<endl;
  cout<<"Value of array[0] "<<*(p+9)<<endl;
  cout<<"Value of array[0] "<<*(p+1)<<endl;
  cout<<"Value of array[0] "<<*(p+2)<<endl;
  cout<<"Value of array[0] "<<*(p+3)<<endl;
  cout<<"Value of array[0] "<<*(p+5)<<endl;
  cout<<"Value of array[0] "<<*(p+6)<<endl;
  cout<<"Value of array[0] "<<*(p+7)<<endl;
  cout<<"Value of array[0] "<<*(p+8)<<endl;
  
  
  return 0;
  
}