/**************************************************************
 * Author: K
 * Date: 2023, April 21
 * About this code: Practicing array initialization, accessing,
 * updating element in the array
***************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    // Initialize the 1D array with 5 integers
    int nums [5] = {1, 34, 21, 23, 31};

    cout << nums[0] << endl;  // Display the element at index 0 (Access)

    nums[0] = 100;  // Update the element at index 0 to 100 (Update)

    // Initialize the 2D array 
    const int rows = {2};
    const int cols = {2};

    int my_matrix [rows][cols] = {{1, 2}, {5, 4}};

    cout << my_matrix[1][0] << endl;  // Display the element at second row, first column (Access)

    my_matrix[1][0] = 3;

    cout << my_matrix[1][0] << endl;  // Update the element at second row, first column (Access)

    return 0;
}
