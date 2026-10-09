/*NAME:KIMANI DAVID MUNGAI
REG NO:CT101/G/26615/25
COURSE:COMPUTER SCIENCE YEAR TWO(GROUP B)
CODE TITLE:HOTEL MANAGEMENT SYSTEM*/



#include <iostream>
using namespace std;

int main()
{
    // 1D array for revenue
    double revenue[7];

    double totalRevenue = 0;
    double averageRevenue;

    // Input revenue for 7 days
    cout << "Enter revenue for 7 days:" << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter revenue for day " << i + 1 << ": ";
        cin >> revenue[i];

        totalRevenue = totalRevenue + revenue[i];
    }

    // Calculate average
    averageRevenue = totalRevenue / 7;

    cout << endl;
    cout << "Total weekly revenue = " << totalRevenue << endl;
    cout << "Average daily revenue = " << averageRevenue << endl;


    // 2D array for room occupancy
    int occupancy[5][10];

    cout << endl;
    cout << "Enter room occupancy data:" << endl;
    cout << "Enter 1 for occupied and 0 for vacant." << endl;

    // Input occupancy
    for (int floor = 0; floor < 5; floor++)
    {
        cout << endl;
        cout << "Floor " << floor + 1 << endl;

        for (int room = 0; room < 10; room++)
        {
            cout << "Room " << room + 1 << ": ";
            cin >> occupancy[floor][room];
        }
    }

    // Display occupied and vacant rooms
    cout << endl;
    cout << "ROOM OCCUPANCY REPORT" << endl;

    for (int floor = 0; floor < 5; floor++)
    {
        int occupied = 0;
        int vacant = 0;

        for (int room = 0; room < 10; room++)
        {
            if (occupancy[floor][room] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        cout << "Floor " << floor + 1;
        cout << ": Occupied = " << occupied;
        cout << ", Vacant = " << vacant << endl;
    }

    return 0;
}