/**
 * @file hash_challenge.cpp
 * @author Khant
 * @version 0.1
 * @date 2023-06-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <math.h>

using namespace std;

// Function prototypes
void halve_a_square(char symbol, int side_length=5);
void side_way_triangle(char symbol, int side_length=7);

int main() {
    char symbol {'#'};

    // halve_a_square(symbol);
    side_way_triangle(symbol, 9);

    return 0;
}

void halve_a_square(char symbol, int side_length) {
    for (size_t row {0}; row < side_length; ++row) {
        for (size_t i {0}; i < side_length - row; ++i) {
            cout << symbol;
        }
        cout << endl;
    }
}

void side_way_triangle(char symbol, int side_length) {
    for (size_t row {1}; row <= side_length; ++row) {

        int half_side = (side_length / 2 + 1);
        int hash_limit = half_side - abs(int(half_side - row));

        for (size_t j {1}; j <= hash_limit; ++j) {
            cout << symbol;
        }
        cout << endl;
    }
}
