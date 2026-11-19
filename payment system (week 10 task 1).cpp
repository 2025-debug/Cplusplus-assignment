/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two(GROUP B)*/

#include <iostream>
using namespace std;

// Create a class named Payment
class Payment {
public:

    // Function for cash payment
    void processPayment(int amount) {
        cout << "Cash Payment: " << amount << endl;
        cout << "Final Payment Amount: " << amount << endl;
    }

    // Function for card payment
    void processPayment(int amount, int fee) {
        int total = amount + fee;

        cout << "\nCard Payment" << endl;
        cout << "Final Payment Amount: " << total << endl;
    }

    // Function for mobile payment
    void processPayment(int amount, int fee, int discount) {
        int total = amount + fee - discount;

        cout << "\nMobile Payment" << endl;
        cout << "Final Payment Amount: " << total << endl;
    }
};

// Main function
int main() {

    // Create an object of the Payment class
    Payment p;

    // Demonstrate cash payment
    p.processPayment(1000);

    // Demonstrate card payment
    p.processPayment(2000, 100);

    // Demonstrate mobile payment
    p.processPayment(3000, 50, 200);

    return 0;
}