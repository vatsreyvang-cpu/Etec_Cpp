#include<iostream>
using namespace std;

struct Book{
	int book_id;
	char title[50];
	char subject[50];
	char auther[50];
	
};
void Input(Book &book){
	
	cout<<"\n";
	cout<<"<=======Book========>\n";
	cout<<"\n";
	
	cout<<"Enter Book_ID     :";cin>>book.book_id;
	cout<<"Enter Book Title  :";cin>>book.title;
	cout<<"Enter Book Subject:";cin>>book.subject;
	cout<<"Enter Book Auther :";cin>>book.auther;
	
}
void Output(Book book){
	
	cout<<"\n";
	cout<<"<=======Output Book========>\n";
	cout<<"\n";
	
	cout<<"Book_ID     :"<<book.book_id<<endl;
	cout<<"Book Title  :"<<book.title<<endl;
	cout<<"Book Subject:"<<book.subject<<endl;
	cout<<"Book Auther :"<<book.auther<<endl;
}

int main(){
	struct Book book;
	
	Input(book);
	Output(book);
	
	
	return 0;
}