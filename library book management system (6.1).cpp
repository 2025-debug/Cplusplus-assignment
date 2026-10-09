/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:LIBRARY BOOK MANAGEMENT SYSTEM*/



#include<iostream>
using namespace std;
class Book{
public :
string bookTitle,author;
int copies,newCopies,borrowed;
void inputDetails(){

cout << " Enter book_title" <<endl;
cin>>bookTitle;
cout << " Enter author" <<endl;
cin>>author;

cout << "enter number of copies" << endl;
cin >> copies;
}
void borrowBook(){
//int borrowed ,newCopies;
cout << "enter number of copies borrowed" << endl;
cin >> borrowed;
newCopies=(copies - borrowed);
}
void display(){
cout << "\nBOOK DETAILS" << endl;
cout << "------------------" << endl;
cout << "Book title:" <<bookTitle<<endl;
cout << "Author:" << author<<endl;
cout << "New copies:" <<newCopies<< endl;
cout << "====================" << endl;
}
};

int main(){
Book book1;
book1.inputDetails ();
book1.borrowBook();
book1.display();

    
}