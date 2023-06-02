#include <iostream>
#include <string>
using namespace std;

int main () {
    cout << "Enter a word (or characters): ";
    string user_input {};
    getline(cin, user_input);

    string temp {};

    // Initialize spaces which is equal to (user_input.length() + 1)
    string spaces (user_input.length(), ' ');  

    // Create an outer loop for each character in user_input
    for (size_t i {0}; i < user_input.length(); ++i) {
        temp += user_input[i];  // Add a character at index i of user_input (string) to temp variable
        cout << spaces;  // Display blank spaces before characters
        
        /* Remove a blank space at index 0 of space after each iteration 
        of outer loop */
        spaces.erase(0, 1); 

        // Display each character in temp variable at index j
        for (size_t j {0}; j < temp.length(); ++j) {
            cout << temp[j];
        }

        // Display each character in temp variable at index k (reverse)
        // Set k value at temp.length - 1
        for (size_t k {temp.length() - 1}; k > 0; --k) {
            cout << temp[k - 1];  // Exclude the last character
        }

        cout << endl;
    }

    return 0;
}