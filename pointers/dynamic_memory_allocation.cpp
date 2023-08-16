// Allocating storage from the heap at runtime.
// Use 'new' keyword
#include <iostream>

using namespace std;

// Function prototypes
void do_int_dynamic_memory_alloc(int num=10);
void do_arr_dynamic_memory_alloc(size_t arr_size=5);

int main() {
    do_int_dynamic_memory_alloc(100);
    do_arr_dynamic_memory_alloc(3);

    return 0;
}


void do_int_dynamic_memory_alloc(int num){
    int *int_ptr {nullptr};  // Create an integer pointer pointing no where
    int_ptr = new int;  // Allocate memory address for an integer on memory heap
    *int_ptr = num;  // Set an integer value at the pointer

    cout << "The value is " << *int_ptr << " and the address is at " << int_ptr << endl;
    delete int_ptr;  // Delete the allocated memory
}


void do_arr_dynamic_memory_alloc(size_t arr_size){
    double *arr_ptr{nullptr};  // Create an array pointer pointing no where
    arr_ptr = new double[arr_size];  // Allocate memory address for a dobule array on memory heap

    cout << "The size of the array is " << arr_size << " and the address is at " << arr_ptr << endl;
    delete [] arr_ptr;  // Delete the allocated memory
}
