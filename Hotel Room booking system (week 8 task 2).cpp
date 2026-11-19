/*NAME:Kimani David MUNGAI
REG NO:CT101/G/26615/25
COURSE:Computer science year two(group B)*/
#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    // Constructor
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;

        cout << "Room booking confirmed" << endl;
    }

    // Function to display booking details
    void displayBooking() {
        cout << "\n--- Room Booking Details ---" << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Number of Days Booked: " << daysBooked << endl;
    }

    // Destructor
    ~RoomBooking() {
        cout << "\nBooking ended, room released" << endl;
    }
};

int main() {
    // Creating an object
    RoomBooking booking1("John", 101, 5);

    // Displaying booking details
    booking1.displayBooking();

    return 0;
}