/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:PAYROLL SYSTEM*/



#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

// Function to get employee details from the user
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

// Function to calculate overtime pay
double calculateOvertimePay(double overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

// Function to calculate net salary
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// Function to display the employee's payslip
void displayPayslip(string name, double basicSalary, double overtimeHours,
                    double ratePerHour, double overtimePay, double netSalary) {

    cout << "\n====================================" << endl;
    cout << "          EMPLOYEE PAYSLIP" << endl;
    cout << "====================================" << endl;

    cout << fixed << setprecision(2);
    cout << "Employee Name  : " << name << endl;
    cout << "Basic Salary   : " << basicSalary << endl;
    cout << "Overtime Hours : " << overtimeHours << endl;
    cout << "Rate Per Hour  : " << ratePerHour << endl;
    cout << "Overtime Pay   : " << overtimePay << endl;
    cout << "Net Salary     : " << netSalary << endl;

    cout << "====================================" << endl;
}

int main() {
    // Declare variables to store employee information
    string name;
    double basicSalary, overtimeHours;
    double ratePerHour;
    double overtimePay, netSalary;

    // Get employee details
    getEmployeeDetails(name, basicSalary, overtimeHours);

    // Ask for the overtime rate per hour
    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;

    // Calculate overtime pay
    overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);

    // Calculate net salary
    netSalary = calculateNetSalary(basicSalary, overtimePay);

    // Display the final payslip
    displayPayslip(name, basicSalary, overtimeHours,
                   ratePerHour, overtimePay, netSalary);

    return 0;
}