#include<iostream>
using namespace std;

int main(){
  
  int array[30];
  int *p = array;
  int n, op;
  
  do{
    cout<<"\n";
    cout<<"<===============>\n";
    cout<<"1. Input Value  \n";
    cout<<"2. Output Value  \n";
    cout<<"3. Search Value  \n";
    cout<<"4. Upadte Value  \n";
    cout<<"5. Delete Value  \n";
    cout<<"6. Insert Value  \n";
    cout<<"7. Sort Value  \n";
    cout<<"8. Exit.........>\n";
    cout<<"<================\n";
    cout<<"Please choose options = ";cin>>op;
    
    switch(op){
      case 1:{
        cout<<"\n";
        cout<<"<==============Input Value=========>\n";
        cout<<"Enter number of array pointer = ";cin>>n;
        cout<<"\n";
        
        for(int i= 0; i<n; i++){
          cout<<"Enter value of *(p + "<<i<<") = ";
          cin>>*(p+i);
          
        }
        cout<<"\n";
        cout<<"Create value successfully\n";
        break;
      }
      case 2:{
      	cout<<"\n";
      	cout<<"<=========Output Value============>\n";
      	cout<<"\n";
      	
      	for(int i=0; i<n;i++){
      		cout<<"Value of *(p+"<<i<<")="<<*(p+1)<<endl;
      		
		  }
		break;
	  }
	  case 3:{
	  	cout<<"\n";
      	cout<<"<=========Search Value by Index============>\n";
      	cout<<"\n";
      	
      	int index;
      	bool check = false;
      	
      	cout<<"Enter Index of value =";cin>>index;
      	
      	for(int i=0; i<n; i++){
      		
      		if(index ==1){
      			cout<<"\n";
      			cout<<"Value of *(p+"<<i<<")="<<*(p+i)<<endl;
      			cout<<"\n";
      			cout<<"Value search has found\n";
      			check = true;
			  }
		  }
		  if(!check){
		  	cout<<"Index of value not found\n";
		  }
		break;
	  }
	  case 4:{
	  	cout<<"\n";
      	cout<<"<=========Update Value by Index============>\n";
      	cout<<"\n";
      	
      	int index;
      	bool check = false;
      	
      	cout<<"Enter Index of value update =";cin>>index;
      	
      	for(int i=0; i<n; i++){
      		
      		if(index ==1){
      			cout<<"\n";
      			cout<<"Value of *(p+"<<i<<") =";cin>>*(p+i);
      			cout<<"\n";
      			cout<<"Value search has found\n";
      			check = true;
			  }
		  }
		  if(!check){
		  	cout<<"Index of value not found\n";
		  }
		break;
	  }
	  case 5:{
	  	cout<<"\n";
      	cout<<"<=========Delete Value by Index============>\n";
      	cout<<"\n";
      	
      	int index;
		bool check=false;
				
		cout<<"Enter index of value delete=";cin>>index;
		
		for(int i=0; i<n-1; i++){
			for(int j=0; j<n-i-1; j++){
				*(p+j) = *(p+(j+1));
					
					check=true;
					cout<<"\n";
					cout<<"Delete Value successfully\n";
				}
				if(!check){
					cout<<"Index of value not delete successfully\n";
				}
		break;
	  	}
      
    	}
    	case 6:{
    		cout<<"\n";
    		cout<<"<=============sort value=================>\n";
    		cout<<"\n";
    		
    		for(int i=0 ; i<n-1;i++){
    			for(int j=o; j<n-i-1;j++){
    				if(*(p+j)>*(p+(j+1))){
    					int temp = *(p+j);
    					*(p+j) = *(p+(j+1));
    					*(p+(j+1))=temp;
					}
				}
			}
			cout<<"Sort value successfully\n";
			break;
		}
	}
  }while(op !=7);
  
  return 0;
 }