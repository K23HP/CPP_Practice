/**
 * @file while_loop.cpp
 * @author Khant
 * @brief 
 * This program demonstrates while loop in CPP.
 * @version 0.1
 * @date 2023-05-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    const vector<int> vec_1 {10, 1, 5, 20, 32, 23, 19};
    const vector<int> vec_2 {99, 15, 43, 5, 10, 3, -99, 100, 102, 1};

    int count {};
    int i {};

    while ((i < vec_2.size()) && (vec_2[i] != -99)) {
        ++count;
        ++i;
    }

    cout << "There are " << count << " integers in the vector before -99." << endl;

    return 0;
}