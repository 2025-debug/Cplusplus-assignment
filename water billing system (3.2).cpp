/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO (GROUP B)
CODE TITLE:WATER BILLING SYSTEM*/



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function to get customer details
void getCustomerDetails(string &name, double &unitsConsumed) {
    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

// Function to calculate the water bill before discount
double calculateBill(double unitsConsumed, double ratePerUnit) {
    return unitsConsumed * ratePerUnit;
}

// Function to apply a 10% discount if units consumed are more than 100
double applyDiscount(double bill, double unitsConsumed) {
    if (unitsConsumed > 100) {
        return bill * 0.10;
    }
    else {
        return 0;
    }
}

// Function to display the complete water bill
void displayBill(string name, double unitsConsumed, double totalBill,
                 double discount, double finalAmount) {

    cout << "\n========================================" << endl;
    cout << "           WATER BILL" << endl;
    cout << "========================================" << endl;

    cout << fixed << setprecision(2);
    cout << "Customer Name       : " << name << endl;
    cout << "Units Consumed      : " << unitsConsumed << endl;
    cout << "Total Bill          : " << totalBill << endl;
    cout << "Discount            : " << discount << endl;
    cout << "Final Amount Payable: " << finalAmount << endl;

    cout << "========================================" << endl;
}

int main() {
    // Declare variables
    string name;
    double unitsConsumed;
    double ratePerUnit;
    double totalBill;
    double discount;
    double finalAmount;

    // Get customer details
    getCustomerDetails(name, unitsConsumed);

    // Get the rate charged per unit
    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;

    // Calculate the bill before discount
    totalBill = calculateBill(unitsConsumed, ratePerUnit);

    // Calculate the discount
    discount = applyDiscount(totalBill, unitsConsumed);

    // Calculate the final amount after discount
    finalAmount = totalBill - discount;

    // Display the complete bill
    displayBill(name, unitsConsumed, totalBill, discount, finalAmount);

    return 0;
}