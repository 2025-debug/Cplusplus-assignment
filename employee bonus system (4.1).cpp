/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:EMPLOYEE BONUS SYSTEM */



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Variables to store employee details
    string employeeName;
    double basicSalary, bonus, totalSalary;

    // Set the output to display two decimal places
    cout << fixed << setprecision(2);

    // Loop to enter details for 5 employees
    for (int i = 1; i <= 5; i++) {

        cout << "\nEnter details for Employee " << i << endl;

        // Enter employee name
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, employeeName);

        // Enter basic salary
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Calculate the bonus
        bonus = 0.05 * basicSalary;

        // Calculate total salary
        totalSalary = basicSalary + bonus;

        // Display the employee report
        cout << "\nEmployee Report" << endl;
        cout << "-----------------------------" << endl;
        cout << "Name         : " << employeeName << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "Bonus        : " << bonus << endl;
        cout << "Total Salary : " << totalSalary << endl;
    }

    return 0;
}