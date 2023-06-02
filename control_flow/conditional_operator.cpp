#include <iostream>

using namespace std;

int main(){
    int num {};

    cout << "Enter an integer: ";
    cin >> num;

    string condition {};
    condition = (num % 2 == 0) ? "even" : "odd";

    cout << num << " is an " << condition << " number." << endl;

    return 0;
}