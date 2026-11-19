/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two(GROUP B)*/
#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    // Function to display person details
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    string admissionNumber;
    string studentClass;

    // Function to display student details
    void displayStudent() {
        displayPerson();

        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student s;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter student age: ";
    cin >> s.age;

    cout << "Enter admission number: ";
    cin >> s.admissionNumber;

    cout << "Enter class: ";
    cin >> s.studentClass;

    // Display student details
    cout << "\n--- Student Details ---" << endl;
    s.displayStudent();

    return 0;
}