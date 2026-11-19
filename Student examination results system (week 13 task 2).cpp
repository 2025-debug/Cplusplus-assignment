/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE:Computer science year two(GROUP B)*/

#include <iostream>
#include <fstream>
using namespace std;

// Structure to hold student information
struct Student
{
    char name[50];
    int registrationNumber;
    float totalMarks;
};

int main()
{
    Student s;

    // Open file for writing
    ofstream outFile("results.dat", ios::binary);

    if (!outFile)
    {
        cout << "Error creating file!";
        return 1;
    }

    // Enter student records
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter student name: ";
        cin >> s.name;

        cout << "Enter registration number: ";
        cin >> s.registrationNumber;

        cout << "Enter total marks: ";
        cin >> s.totalMarks;

        outFile.write(reinterpret_cast<char*>(&s), sizeof(s));
    }

    outFile.close();

    // Open file for reading
    ifstream inFile("results.dat", ios::binary);

    if (!inFile)
    {
        cout << "Error opening file!";
        return 1;
    }

    cout << "\n\nSTUDENT EXAMINATION RESULTS\n";
    cout << "---------------------------\n";

    // Read and display student records
    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s)))
    {
        cout << "Student Name: " << s.name << endl;
        cout << "Total Marks: " << s.totalMarks << endl;
        cout << "---------------------------\n";
    }

    inFile.close();

    return 0;
}