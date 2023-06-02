/*
 * @file range_based_for_loop.cpp
 * @author Khant
 * @brief 
 * This program calculate the average temperature of the given
 * vector of temperatures using range-based for loop
 * 
 * @version 0.1
 * @date 2023-05-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    vector <int> temperatures {23, 22, 25, 27, 30};

    int total {}, average {};

    if (temperatures.size() != 0){
        for (auto temperature: temperatures) {
            total += temperature;
        }

        average = total / temperatures.size();
    }

    cout << "Average temperature is: " << average << "°C" << endl;

    return 0;
}