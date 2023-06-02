/**********************************************
 * Author: K
 * Date: 2023, April 20
 * About this code: Calculate area of the room
**********************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << "Enter room width (ft): ";
    int room_width = 0;
    cin >> room_width;

    cout << "Enter room length (ft): ";
    int room_length = 0;
    cin >> room_length;

    // Calculate area of the room
    int area = room_length * room_width;
    cout << "Area of the room = " << area << " sqft" << endl;
    
    return 0;
}
