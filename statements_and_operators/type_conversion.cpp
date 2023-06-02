/**************************************************************
 * Author: K
 * Date: 2023, April 25
 * About this code: Data type conversion or coercion
***************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int num1 {}, num2 {}, num3 {};
    int total {};
    const int count {3};

    cout << "Here we are going to calculate average of 3 integers." << endl;

    cout << "Enter three integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    
    double average {0.0};

    average = static_cast<double>(total) / count;  // use static_cast<dtype>(variable) for type conversion

    cout << "The 3 numbers are: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the 3 numbers is: " << total << endl;
    cout << "The average of 3 numbers is: " << average << endl;

    return 0;
}

