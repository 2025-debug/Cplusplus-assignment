/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two (GROUP B)*/

#include <iostream>
using namespace std;

class Student {
private:
    string studentName;
    int admissionNumber;
    double feeBalance;

public:
    // Function to input student details
    void inputStudentData() {
        cout << "Enter student name: ";
        cin >> studentName;

        cout << "Enter admission number: ";
     cin >> admissionNumber;

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // Function to make fee payment
    void makePayment() {
        double payment;

        cout << "Enter amount to pay: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance) {
            feeBalance = feeBalance - payment;
            cout << "Payment successful!" << endl;
        } else {
            cout << "Invalid payment amount!" << endl;
        }
    }

    // Function to display student details
    void displayStatus() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student s1;

    s1.inputStudentData();
    s1.makePayment();
    s1.displayStatus();

    return 0;
}