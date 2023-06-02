/**
 * @file histogram_nested_loop.cpp
 * @author khant
 * @brief 
 * This program prints histogram based on the data you entered.
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

    // Get number of data item
    int data_amount {0};
    cout << "Enter the number of data you have: ";
    cin >> data_amount;

    // Create an empty vector to store data items
    vector<int> data_list {};

    // Let the user enter values and save in data_list
    for (int i {0}; i < data_amount; ++i) {
        int data {0};

        cout << "Enter data item " << i + 1 << ": ";
        cin >> data;

        data_list.push_back(data);
    }

    cout << endl;

    // Display histogram for each value in the data_list
    cout << "Displaying histogram: " << endl;
    for (int x {0}; x < data_list.size(); ++x) {

        int num = data_list[x];  // Get a value from data_list
        
        for (int y {1}; y <= num; ++y) {
            if (y % 5 == 0) {  // Every fifth value will be displayed with '*'
                cout << "*";
            }
            else {
                cout << "-";  // Other value will be displayed with '-'
            }
        }
        cout << endl;
    }

    return 0;
}
