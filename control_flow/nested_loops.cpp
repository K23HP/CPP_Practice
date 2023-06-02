/**
 * @file nested_loops.cpp
 * @author Khant
 * @brief 
 * This program demostrates nested loops in CPP
 * 
 * @version 0.1
 * @date 2023-05-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a 2-dimensional vector
    vector<vector<int>> vector_2d
    {
        {1, 2, 3},
        {10, 20, 30},
        {100, 200, 300},
    };

    cout << "1. Printing values with nested range-based for-loop..." << endl;
    // Print each values in vector_2d using nested range_based for-loop
    for (auto vector: vector_2d) {  // For each vector in vector_2d
        for (auto value: vector) {  // For each value in vector
            cout << value << " ";  // Print each value from vector seperated by a space
        }
        cout << endl;  // Go to new line after printing all values in vector
    }

    cout << "------------------------" << endl;

    cout << "2. Printing values with nested for-loop..." << endl;
    // Print each values in vector_2d using nested for-loop
    for (int i {0}; i < vector_2d.size(); ++i) {  // For i is less than size of vector_2d
        vector<int> vec = vector_2d[i];  // Get the first vector element from vector_2d
        for (int j {0}; j < vec.size(); ++j) {  // For j is less than the size of vec
            cout << vec[j] << " ";  // Print each value from vec separated by a space
        }
        cout << endl;  // Go to the new line after printing all values in vec
    }

    return 0;
}