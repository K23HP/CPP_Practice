#include <iostream>

using namespace std;

int main(){
    int a {0};  // Initialized a as 0
    int b {0};  // Initialized b as 0
    int result {0};  // Initialized result as 0

    a = 100;  // Assigned a as 100
    b = 200;  // Assigned b as 200

    // Addition
    result = a + b;  // Calculate a + b and assign the value to result
    cout << a << " + " << b << " = " << result << endl;

    // Subtraction
    result = b - a;  // Calculate b - a and assign the value to result
    cout << a << " - " << b << " = " << result << endl;

    // Multiplication
    result = a * b;  // Calculate a * b and assign the value to result
    cout << a << " * " << b << " = " << result << endl;

    // Division
    result = a / b;  // Calculate a / b and assign the value to result
    cout << a << " / " << b << " = " << result << endl;

    // Modulo or Remainder
    result = a % b;  // Calculate a % b and assign the value to result
    cout << a << " % " << b << " = " << result << endl;

    return 0;
}