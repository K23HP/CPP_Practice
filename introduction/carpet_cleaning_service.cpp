/**********************************************************
 * Author: K
 * Date: 2023, April 20
 * About this code: Room Carpet Cleaning Service Console App
***********************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    // Prices and tax
    const double small_room_price = 25;
    const double large_room_price = 35;
    const double tax_rate = 0.06;
    const int valid_days = 30;  // Number of days

    // Prompting the users to let them know the service prices and tax percent
    cout << "Welcome to Frank's Carpet Cleaning Service!" << endl;
    cout << "Charges: " << endl;
    cout << "\t$" << small_room_price << " per small room" << endl;
    cout << "\t$" << large_room_price << " per large room" << endl;

    cout << endl;

    cout << "Sales tax rate is " << tax_rate * 100 << "%" << endl;
    cout << "Estimates are valid for " << valid_days << " days" << endl;

    cout << endl;
    cout << "<<<<<======================#####=======================>>>>>" << endl;
    cout << endl;

    // Prompt the user to enter number of rooms to be cleaned
    cout << "Enter the number of small rooms: ";
    int small_rooms = 0;
    cin >> small_rooms;

    cout << "Enter the number of large rooms: ";
    int large_rooms = 0;
    cin >> large_rooms;

    cout << endl;
    cout << "<<<<<======================#####=======================>>>>>" << endl;
    cout << endl;

    // Calculate cost for small rooms and large rooms
    double small_room_fees = small_room_price * small_rooms;
    double large_room_fees = large_room_price * large_rooms;

    // Calculate the sum of small and large rooms prices
    double cost = small_room_fees + large_room_fees;

    // Calculate the amount of tax
    double tax_fees = cost * tax_rate;

    // Calculate the total cost
    double total_cost = cost + tax_fees;

    // Display the total cost estimate for the service
    cout << "Estimated Carpet Cleaning Service" << endl;

    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;

    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;

    cout << "Cost: $" << cost << endl;

    cout << "Tax: $" << tax_fees << endl;

    cout << endl;
    cout << "============================================================";
    cout << endl;

    cout << "Total estimate: $" << total_cost << endl;
    cout << "This estimate is valid for " << valid_days << " days" << endl;

    return 0;
}
