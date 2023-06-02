#include <iostream>

using namespace std;

// Function prototype
int sum_of_digits(int n);

int main() {

    int num {1234};

    cout << "Sum of digits of " << num << " is " << sum_of_digits(num) << endl;

    return 0;
}

// if num == 1234, result: 1 + 2 + 3 + 4 == 10
// Base case: n == 0 -> 0
// Recursive case: (n % 10) + sum_of_digits(n / 10)
int sum_of_digits(int n) {
    if (n == 0) 
        return 0;
    
    return ((n % 10) + sum_of_digits(n / 10));

}
