/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two(GOUP B)*/
#include <iostream>
using namespace std;

// Abstract base class
class MedicalStaff {
protected:
    string staffName;
    int staffID;

public:
    // Constructor
    MedicalStaff(string name, int id) {
        staffName = name;
        staffID = id;
    }

    // Pure virtual function
    virtual double calculateSalary() = 0;

    // Non-virtual function
    void displayDetails() {
        cout << "Staff Name: " << staffName << endl;
        cout << "Staff ID: " << staffID << endl;
    }
};

// Derived class Doctor
class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    Doctor(string name, int id, double basic, double allow)
        : MedicalStaff(name, id) {
        basicSalary = basic;
        allowance = allow;
    }

    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

// Derived class Nurse
class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(string name, int id, double basic, double overtime)
        : MedicalStaff(name, id) {
        basicSalary = basic;
        overtimePay = overtime;
    }

    double calculateSalary() override {
        return basicSalary + overtimePay;
    }
};

// Main function
int main() {
    // Base class pointer
    MedicalStaff *staff;

    // Create Doctor object
    Doctor d("John", 101, 80000, 20000);

    // Create Nurse object
    Nurse n("Mary", 102, 50000, 10000);

    // Display Doctor details
    staff = &d;
    cout << "DOCTOR DETAILS" << endl;
    staff->displayDetails();
    cout << "Salary: " << staff->calculateSalary() << endl;

    cout << endl;

    // Display Nurse details
    staff = &n;
    cout << "NURSE DETAILS" << endl;
    staff->displayDetails();
    cout << "Salary: " << staff->calculateSalary() << endl;

    return 0;
}