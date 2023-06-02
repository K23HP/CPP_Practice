#include <iostream>

using namespace std;

// Function prototypes
unsigned long long get_factorial(unsigned long long num);  // factorial
unsigned long long get_fibonacci(unsigned long long num);

int main() {
    int num1 {10};

    cout << "Factorial of " << num1 << " is " << get_factorial(num1) << endl;
    cout << "Fibonacci of " << num1 << " is " << get_fibonacci(num1) << endl;

    return 0;
}

// Factorial
// One base case: if (num == 0) -> 1
// Recursive case: factorial(n) = n * factorial(n - 1)
unsigned long long get_factorial(unsigned long long num) {
    if (num == 0) 
        return 1;

    return num * get_factorial(num - 1);    

}

// Fibonacci
// Two base cases: if (num == 1) -> 1, and if (num == 0) -> 0
// Recursive case: Fib(n) = Fib(n - 1) + Fib(n - 2)
unsigned long long get_fibonacci(unsigned long long num) {
    if (num <= 1)
        return num;

    return get_fibonacci(num - 1) + get_fibonacci(num - 2);
}
