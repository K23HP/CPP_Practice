#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int num);

int main() {
    int integers[] {95, 98, 97, 96, 99};

    print_array(integers, 5);
    set_array(integers, 5, 100);
    print_array(integers, 5);

    return 0;
}

/* Passing an array into a function: 
add square brackets after array_name, pass size of the array to loop through
note: var_name of an array represents the location of first element in memory.
Therefore, the copy of the entire array is not passed into the function, but only
the memory location of first element in the array. So, the function doesn't know 
how many elements are in the array. Intuitively, programmer doesn't know how many times
to iterate the array. Thus, we need to add the size of array into the function as well.

Advantage: Since the memory address of the first element of the array is passed to the
function, we can change the elements of the array inside the function. But if we don't 
want it to change it, we can use const to set the formal parameter array as constant at 
the function declaration. That means the array is read only in the function.
*/

void print_array(const int arr[], size_t size) {
    for (size_t i {0}; i < size; ++i) 
        cout << arr[i] << " ";
    
    cout << endl;
}

void set_array(int arr[], size_t size, int num) {
    for (size_t j {0}; j < size; ++j) 
        arr[j] = num;
}
