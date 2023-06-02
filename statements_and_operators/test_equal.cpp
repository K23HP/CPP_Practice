/**************************************************************
 * Author: K
 * Date: 2023, April 25
 * About this code: Equality operator and boolean value in CPP
***************************************************************/

#include <iostream>

using namespace std;

int main(){
    bool is_equal {false}, is_not_equal {false};
    
    int num1 {}, num2 {};

    cout << boolalpha;  // Will display true or false instead of 1 or 0

    cout << "Enter 2 integers separated by spaces: ";
    cin >> num1 >> num2;

    cout << "The first number is: " << num1 << endl;
    cout << "The second number is: " << num2 << endl;

    cout << endl;

    is_equal = (num1 == num2);
    is_not_equal = (num1 != num2);

    cout << num1 << " = " << num2 << "?\n> " << is_equal << endl;
    cout << endl;
    cout << num1 << " != " << num2 << "?\n> " << is_not_equal << endl;

    return 0;
}