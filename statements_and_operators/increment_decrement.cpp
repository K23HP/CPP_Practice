#include <iostream>

using namespace std;

int main(){

    int num1 {0};
    cout << "Enter an integer for num1: ";
    cin >> num1;
    
    int num2 {0};
    cout << "Enter an integer for num2: ";
    cin >> num2;

    cout << endl;
    cout << "Increment ++";

    cout << endl;
    cout << "num1 = " << num1 << "  num2 = " << num2 << endl;
    cout << endl;

    // Increment ++
    int prefix_result {0};
    cout << "Before prefix increment of num1: ++num1" << endl;
    cout << "num1 = " << num1 << "  prefix result = " << prefix_result << endl;
    
    // Prefix increment
    prefix_result = ++num1;  // num1 = 11, result = 11
    cout << "After prefix increment: " << endl;
    cout << "num1 = " << num1 << "  prefix result = " << prefix_result << endl;

    cout << endl;

    int postfix_result {0};
    cout << "Before postfix increment of num2: num2++" << endl;
    cout << "num2 = " << num2 << "  postfix result = " << postfix_result << endl;

    // Postfix increment
    postfix_result = num2++;  // num2 = 21, result = 20
    cout << "After postfix increment: " << endl;
    cout << "num2 = " << num2 << "  postfix result = " << postfix_result << endl;

    cout << endl;

    // Decrement ++
    cout << "Decrement -- ";

    cout << endl;
    cout << "num1 = " << num1 << "  num2 = " << num2 << endl;
    cout << endl;

    // Increment ++
    prefix_result = 0;
    cout << "Before prefix increment of num1: --num1" << endl;
    cout << "num1 = " << num1 << "  prefix result = " << prefix_result << endl;
    
    // Prefix increment
    prefix_result = --num1;  // num1 = 11, result = 11
    cout << "After prefix increment: " << endl;
    cout << "num1 = " << num1 << "  prefix result = " << prefix_result << endl;

    cout << endl;

    postfix_result = 0;
    cout << "Before postfix increment of num2: num2--" << endl;
    cout << "num2 = " << num2 << "  postfix result = " << postfix_result << endl;

    // Postfix increment
    postfix_result = num2--;  // num2 = 21, result = 20
    cout << "After postfix increment: " << endl;
    cout << "num2 = " << num2 << "  postfix result = " << postfix_result << endl;

    return 0;
}