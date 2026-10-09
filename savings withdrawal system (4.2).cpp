/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO (GROUP B)
CODE TITLE:SAVINGS WITHDRAWAL SYSTEM */



#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    // Enter the initial balance
    cout << "Enter account balance: ";
    cin >> balance;

    // Repeat withdrawals while balance is greater than zero
    while (balance > 0) {
        cout << "Enter withdrawal amount: ";
        cin >> withdrawal;

        // Check if withdrawal is greater than balance
        if (withdrawal > balance) {
            cout << "Insufficient balance!" << endl;
            break;
        }

        // Deduct withdrawal from balance
        balance = balance - withdrawal;

        // Display remaining balance
        cout << "Remaining balance: " << balance << endl;

        // Stop when balance becomes zero
        if (balance == 0) {
            cout << "Balance is zero. No more withdrawals." << endl;
            break;
        }
    }

    return 0;
}