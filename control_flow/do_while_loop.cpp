/**
 * @file do_while_loop.cpp
 * @author Khant
 * @brief 
 * This program demonstrates do-while loop
 * @version 0.1
 * @date 2023-05-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

int main() {
    char selection {};

    do {
        cout << "Choose an option below: " << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;

        cout << endl;

        cout << "Enter your selection: ";
        cin >> selection;

        switch (selection) {
            case '1':
                cout << "Your code - 1. Doing this." << endl;
                break;
            case '2':
                cout << "Your code - 2. Doing that." << endl;
                break;
            case '3':
                cout << "Your code - 3. Doing something else." << endl;
                break;
            case 'Q':
                cout << "Your code - Q. Quit the program." << endl;
                break;
            default:
                cout << ">>> Invalid Option!" << endl;
                break;
        }

        cout << endl;

    } while (selection != 'Q');

    return 0;
}

