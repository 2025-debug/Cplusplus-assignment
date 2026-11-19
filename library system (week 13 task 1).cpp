/*NAME:Kimani David Mungai
REG NO:CT101/G/26615/25
COURSE Computer science year two(GROUP B)*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string bookTitle;

    // Ask the librarian to enter a book title
    cout << "Enter book title: ";
    getline(cin, bookTitle);

    // Open the file in append mode
    ofstream file("borrowed_books.txt", ios::app);

    // Check whether the file opened successfully
    if (file.is_open())
    {
        // Store the book title in the file
        file << bookTitle << endl;

        // Display confirmation message
        cout << "Book title successfully stored!" << endl;

        // Close the file
        file.close();
    }
    else
    {
        cout << "Error opening the file!" << endl;
    }

    return 0;
}