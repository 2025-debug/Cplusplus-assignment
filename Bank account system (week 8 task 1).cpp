/*MAME:Kimani David MUNGAI
REG NO:CT101/G/26615/25
COURSE:Computer science year two*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:
    // Constructor
    BankAccount(string name, int number, double balance)
    {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;

        cout << "Account successfully created" << endl;
    }

    // Function to display account details
    void displayAccount()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "Account closed successfully" << endl;
    }
};

int main()
{
    // Creating an object
    BankAccount account1("John Mwangi", 12345, 50000.00);

    // Displaying account details
    account1.displayAccount();

    return 0;
}