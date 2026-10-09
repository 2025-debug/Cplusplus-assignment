/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE COMPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:ADMISSION DECISION*/



#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables to store the student's name, age, and exam score
    string studentName;
    int age;
    int examScore;

    // Ask the user to enter the student's details
    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    // Use nested if statements to determine admission
    string admissionDecision;

    if (age >= 18) {
        if (examScore >= 50) {
            admissionDecision = "Admitted";
        } else {
            admissionDecision = "NotAdmitted:LowScore";
        }
    } else {
        admissionDecision = "NotAdmitted:Underage";
    }

    // Display the student's details and admission decision
    cout << "\nStudent Name: " << studentName << endl;
    cout << "Age: " << age << endl;
    cout << "Exam Score: " << examScore << endl;
    cout << "Admission Decision: " << admissionDecision << endl;

    return 0;
}