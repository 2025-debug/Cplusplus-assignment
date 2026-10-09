/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE: COMPUTER SCIENCE YEAR TWO (GROUP B )
CODE TITLE:PHONE SALES RECEIPT SYSTEM*/




#include<iostream>
using namespace std;
int main() 
{

//declaration of variables
string name;
string model;
int quantity;
float price,total;

//prompting the user to enter customer details required 
cout << "Enter customer name" << endl;
cin >> name;
cout << "Enter the phone model" << endl;
cin >> model;
cout << "Enter quantity of phones purchased" << endl;
cin >> quantity;
cout << "Enter price per phone" << endl;
cin >> price;
total=quantity*price;//calculating total sales

//displaying the sales receipt
cout << "\n\nSALES RECEIPT" << endl;
cout << "==============" << endl;
cout << "NAME:" <<name<<endl;
cout << "PHONE MODEL:" <<model<<endl;
cout << "QUANTITY PURCHASED:" <<quantity<< endl;
cout << "PRICE PER PHONE:" <<price<< endl;
cout << "------------------" << endl;
cout << "TOTAL SALES=" << total<<endl;
cout << "=================" << endl;
    return 0;
}