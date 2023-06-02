/**************************************************************
 * Author: K
 * Date: 2023, April 21
 * About this code: Practicing array initialization, accessing,
 * updating element in the vector
***************************************************************/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    // Initialize the vector of five alphabets
    vector <char> names {'A','B','C','D','E'};

    cout << names[4] << endl;  // Displays the last element in the vector

    // Initialize the vector of integers
    vector <int> nums {12, 14, 16, 20};

    cout << "There are " << nums.size() << " numbers in the vector "<< endl;
    cout << nums.at(2) << " is at index 2" << endl;  // Displays the number at index 2;

    // Add another number to the nums
    nums.push_back(30);
    cout << "There are " << nums.size() << " numbers in the vector "<< endl;
    cout << nums.at(4) << " is the last element" << endl;  // Displays the number at index 2;

    return 0;
}
