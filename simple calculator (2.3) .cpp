/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:SIMPLE CALCULATOR*/



#include <iostream>
using namespace std;

int main() {
//declaration of variables 
    double number1, number2, result;
    char operation;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> number2;
    
//using the switch statement 
    switch (operation) {
        case '+':
            result = number1 + number2;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result: " << result << endl;
            break;

        case '/'://handling division by zero
            if (number2 == 0) {
                cout << "\nError: Division by zero is not allowed." << endl;
            } else {
            
          //  displaying the results
          result = number1 / number2;
                cout << "\nResult: " << result << endl;
            }
            break;

        default:
            cout << "Error: Invalid operator." << endl;
              }

    return 0;
    }