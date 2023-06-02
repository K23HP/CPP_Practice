#include <iostream>
#include <iomanip>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    char selection {};
    bool run_program {true};
    vector<int> vec {1, 2};

    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "C - Clear all numbers in the list" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit the program" << endl;
        cout << "------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> selection;
        cout << endl;

        // If p is selected, print values in vec.
        if (selection == 'p' || selection == 'P') {
            if (vec.size() == 0) {
                cout << "[] - the list is empty" << endl;
            }
            else {
                cout << ">>> [ ";
                for (int i {0}; i < vec.size(); ++i) {
                    cout << vec[i] << " ";
                }
                cout << "]" << endl;
            }
            cout << endl;
        }
        // If a is selected, added a num to vec
        else if (selection == 'a' || selection == 'A'); 
        // {
            // int num {};
            // int count {};

            // cout << "Enter an integer to add to the list: ";
            // cin >> num;
            
            // if (isalpha(num)) {
            //     cout << ">>> Invalid Input!!!" << endl;
            // }
            // else {
                // for (auto val: vec) {
                //     if (num == val) {
                //         ++count;
                //     }
                // }
                // if (count > 0) {
                //     cout << ">>> " << num << " is already in the list - no duplicate allows" << endl;
                // }
                // else {
                //     vec.push_back(num);
                //     cout << ">>> " << num << " added\n" << endl;

                //     cout << ">>> [ ";
                //     for (int i {0}; i < vec.size(); ++i) {
                //         cout << vec[i] << " ";
                //     }
                //     cout << "]" << endl;
                        
                //     cout << ">>> Number of elements in the list: " << vec.size() << "\n" << endl;
                // }
        //         cout << "This is num" << endl;
        //     }
        // }
        // Clear all elements inside vec
        else if (selection == 'c' || selection == 'C') {
            vec.clear();
            cout << ">>> Removed every element in the list\n" << endl;
        }
        // Calculate mean of vec
        else if (selection == 'm' || selection == 'M') {
            if (vec.size() == 0) {
                cout << ">>> Unable to calculate the mean - no data\n" << endl;
            }
            else {
                int sum {};
                double mean {};

                for (auto val: vec) {
                    sum += val;
                }
                
                
                mean = static_cast<double>(sum) / vec.size();

                cout << "(";
                for (int j {0}; j < vec.size(); ++j) {
                    if (j == vec.size() - 1) {
                        cout << vec[j];
                    }
                    else{
                        cout << vec[j] << " + ";
                    }    
                }
                cout << ")";
                cout << " / " << vec.size() << endl;

                cout << fixed << setprecision(2);
                cout << ">>> Mean: " << mean << "\n" << endl;
            }
        }
        // Get smallest number from vec
        else if (selection == 's' || selection == 'S') {
            if (vec.size() == 0) {
                cout << ">>> Unable to determine the smallest number - list is empty\n" << endl;
            }
            else {
                int smallest {vec[0]};

                for (auto val: vec) {
                    if (val < smallest) {
                        smallest = val;
                    }
                }

                cout << ">>> The smallest number is " << smallest << "\n" << endl;
            }
        }
        // Get largest number from vec
        else if (selection == 'l' || selection == 'L') {
            if (vec.size() == 0) {
                cout << ">>> Unable to determine the largest number - list is empty\n" << endl;
            }
            else {
                int largest {vec[0]};

                for (auto val: vec) {
                    if (val > largest) {
                        largest = val;
                    }
                }

                cout << ">>> The largest number is " << largest << "\n" << endl;
            }
        }
        // Quit the program
        else if (selection == 'q' || selection == 'Q') {
            cout << ">>> Goodbye!" << endl;
            run_program = false;
        }
        // Invalid selection of the user input.
        else {
            cout << "Invalid selection, please try again." << endl;
            cout << "------------------------------------" << endl;
        }

    }
    while (run_program);

    return 0;
}