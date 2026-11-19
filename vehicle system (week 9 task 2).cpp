/*NAME:Kimani David Mungai
REG NO;CT101/G/26615/25
COURSE:Computer science year two(GROUP B)*/
#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter vehicle brand: ";
        cin >> brand;

        cout << "Enter year of manufacture: ";
        cin >> year;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of manufacture: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
    void inputCar() {
        inputVehicle();

        cout << "Enter number of doors: ";
        cin >> numberOfDoors;

        cout << "Enter engine capacity: ";
        cin >> engineCapacity;
    }

    void displayCar() {
        displayVehicle();

        cout << "Number of doors: " << numberOfDoors << endl;
        cout << "Engine capacity: " << engineCapacity << " CC" << endl;
    }
};

// Main function
int main() {
    Car myCar;

    cout << "Enter Car Details" << endl;
    myCar.inputCar();

    cout << "\nCar Details" << endl;
    myCar.displayCar();

    return 0;
}