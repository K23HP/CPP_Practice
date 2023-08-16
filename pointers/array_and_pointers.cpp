#include <iostream>

using namespace std;

// Function prototype
void show_arr_ptr_similarity(int arr[], int arr_length);
void display_subscript_notation_arr_val(int arr[], int arr_length,
    string title="Array subscript notation -------------------------------");
void display_offset_notation_arr_val(int arr[], int arr_length,
    string title="Array offset notation -------------------------------");


int main() {
    int scores[] {100, 98, 99};
    int arr_length = sizeof(scores) / sizeof(scores[0]);  // Get the length of the arr
    show_arr_ptr_similarity(scores, arr_length);

    return 0;
}


void show_arr_ptr_similarity(int arr[], int arr_length){
    // Demonstrate the similarity of using array and point which points to the array
    cout << "Address of arr: " << arr << endl;
    int *arr_ptr {arr};  // Create a pointer pointing to the valess of the arr
    cout << "Address of arr_ptr: " << arr_ptr << endl;
    cout << endl;

    display_subscript_notation_arr_val(arr, arr_length);
    display_subscript_notation_arr_val(arr_ptr, arr_length,
    "Pointer subscript notation -------------------------------");

    display_offset_notation_arr_val(arr, arr_length);
    display_offset_notation_arr_val(arr, arr_length,
    "Pointer offset notation -------------------------------");
}


void display_subscript_notation_arr_val(int arr[], int arr_length, string title){
    // Display each value in the array with subscript notation
    cout <<  title << endl;
    for (int i = 0; i < arr_length; ++i){
        cout << arr[i] << endl;
    }
    cout << endl;
}


void display_offset_notation_arr_val(int arr[], int arr_length, string title){
    // Display each value in the array with offset notation
    cout << title << endl;
    for (int i = 0; i < arr_length; ++i){
        cout << *(arr + i) << endl;
    }
    cout << endl;
}
