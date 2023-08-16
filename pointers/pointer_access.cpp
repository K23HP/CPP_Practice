#include <iostream>

using namespace std;

int main() {
    // Create an integer pointer
    int *int_ptr {nullptr};

    cout << "Pointer int_ptr memory location is " << &int_ptr << endl;

    cout << "Pointer is pointing at " << int_ptr << endl;

    cout << "Pointer size is " << sizeof int_ptr << endl;

    int num {10};

    int_ptr = &num;  // int_ptr holds the num's memory location

    cout << "Memory location of number " << num << " in memory is " << int_ptr << endl;

    cout << "Number " << num << " size is " << sizeof num << endl;

    cout << "Pointer is pointing at " << int_ptr << endl;

    cout << "Pointer size is " << sizeof int_ptr << endl;

    cout << "Size of pointer in memory is different from size of data in memory where pointer points at" << endl;

    return 0;
}