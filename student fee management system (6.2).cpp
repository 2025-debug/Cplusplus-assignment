/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:STUDENT FEE MANAGEMENT SYSTEM*/



#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    // Function to input student details
    void inputStudent()
    {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // Function to make a payment
    void makePayment()
    {
        double payment;

        cout << "Enter amount to pay: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance)
        {
            feeBalance = feeBalance - payment;
            cout << "Payment successful!" << endl;
        }
        else if (payment > feeBalance)
        {
            cout << "Payment is greater than the fee balance." << endl;
        }
        else
        {
            cout << "Invalid payment amount." << endl;
        }
    }

    // Function to display student details and balance
    void displayStatus()
    {
        cout << "\n--- UPDATED FEE STATUS ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main()
{
    // Create an object of Student
    Student student;

    // Input student details
    student.inputStudent();

    // Process fee payment
    student.makePayment();

    // Display updated fee status
    student.displayStatus();

    return 0;
}
