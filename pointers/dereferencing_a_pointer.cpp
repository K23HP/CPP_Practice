/*
Dereferencing a point means accessing the data which the pointer
is pointing to.
*/

#include <iostream>

using namespace std;

int main() {
    int my_score {100};
    int *score_ptr {&my_score};  // Initialize pointer with address of my_score

    cout << "score_ptr stores " << *score_ptr << endl;  // Show the value stored at score_ptr's memory address
    cout << "score_ptr pointing address " << score_ptr << endl;  // Show memory address of my_score

    double high_temp {100.7};
    double low_temp {37.2};

    double *temp_ptr {&high_temp};  // Initialize pointer with address of high_temp

    cout << "High temp: " << *temp_ptr << endl;  // Dereferencing the pointer to get the address of high_temp

    temp_ptr = &low_temp;  // Change the address of pointer stored to the address of low_temp

    cout << "Low temp: " << *temp_ptr << endl;  // Dereferencing the pointer to get the address of low_temp

    return 0;
}
