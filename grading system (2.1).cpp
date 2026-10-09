/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:GRADING SYSTEM */



#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables to store the student's name, marks, and grade
    string studentName;
    int marks;
    char grade;

    // Ask the user to enter the student's name
    cout << "Enter student name: ";
    cin >> studentName;

    // Ask the user to enter the student's exam marks
    cout << "Enter exam marks: ";
    cin >> marks;

    // Using an if-else-if ladder to determine the grade
    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    }
    else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    }
    else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    }
    else {
        grade = 'E';
    }

    // Display the student's details and the assigned grade
    cout << "\nStudent Name: " << studentName << endl;
    cout << "Exam Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
    }