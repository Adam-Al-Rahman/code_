#include <iostream>

#include "../includes/ben.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

const void room()
{
    cout << "Estimate for carpet cleaning service";
    cout << "\n------------------------------------\n";

    int small_rooms{0};
    int large_rooms{0};
    cout << "\nNumber of small rooms: ";
    cin >> small_rooms;
    cout << "Number of large rooms: ";
    cin >> large_rooms;

    cout << "\nPrice per small room: $25";
    cout << "\nPrice per small room: $35";

    const int small_room_cost = small_rooms * 25;
    const int large_room_cost = large_rooms * 35;
    const float tax = (small_room_cost * 0.06) + (large_room_cost * 0.06);

    cout << "\nTax: " << tax;

    cout << "\n------------------------------------\n";
    cout << "Total estimates: $" << (small_room_cost + large_room_cost + tax);
    cout << "\n*Note: This estimate is valid for 30 days.";
}

const int room_area()
{
    int room_length{0};
    int room_width{0};

    cout << "Enter the length and breadth of room : ";
    cin >> room_length >> room_width;

    cout << "Area of room : " << room_length * room_width << " Sqft." << endl;

    return 0;
}
