/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two (GROUP B)*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employeeName;
    int employeeID;
    double basicSalary;

public:
    // Function to input employee details
    void setEmployeeDetails() {
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate net salary
    double calculateSalary() {
        return basicSalary + (0.10 * basicSalary);
    }

    // Function to display employee details
    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << calculateSalary() << endl;
    }
};

int main() {
    // Create an object of Employee class
    Employee emp;

    // Set employee details
    emp.setEmployeeDetails();

    // Display employee details
    emp.displayEmployeeDetails();

    return 0;
}