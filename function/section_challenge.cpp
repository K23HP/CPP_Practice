#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Function prototypes
void print_numbers(const vector<int> &vec);
void display_minimum(const vector<int> &vec);
void display_maximum(const vector<int> &vec);
void clear_numbers(vector<int> &vec);
void add_number(vector<int> &vec, int num);
double calc_average(vector<int> vec);
void quit_program(bool &status);

int main() {
    vector<int> nums {100, 0, 1, 32, 31, 2, 3, 4, 5, 10};
    char selection {};
    bool run_program {true};

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
        tolower(selection);
        cout << endl;

        if (selection == 'q')
            quit_program(run_program);

        else if (selection == 'p')
            print_numbers(nums);
            
        else if (selection == 'a') {
            int num {};
            cout << "Enter a number to add: ";
            cin >> num;
            add_number(nums, num);
        }
        
        else if (selection == 'm') {
            double mean {calc_average(nums)};

            cout << fixed << setprecision(2);
            cout << "Average: " << mean << endl;
            cout << endl;
        }

        else if (selection == 's')
            display_minimum(nums);
        
        else if (selection == 'l')
            display_maximum(nums);
            
        else if (selection == 'c')
            clear_numbers(nums);

    } while (run_program);

    return 0;
}

void print_numbers(const vector<int> &vec) {
    if (vec.size() > 0) {
        cout << "Elements in vector are: " << endl;

        for (auto element: vec)
            cout << element << " ";

        cout << endl;    
    }
    else {
        cout << "Empty vector!" << endl;
    }
    cout << endl;
}

void display_maximum(const vector<int> &vec) {
    int largest {vec[0]};

    for (size_t i {0}; i < vec.size(); ++i) {
        if (vec[i] > largest) {
            largest = vec[i];
        }
    }

    cout << "Maximum number: " << largest << endl;

    cout << endl;
}

void display_minimum(const vector<int> &vec) {
    int smallest {vec[0]};

    for (size_t i {0}; i < vec.size(); ++i) {
        if (vec[i] < smallest) 
            smallest = vec[i];
    }

    cout << "Minimum number: " << smallest << endl;

    cout << endl;
}

void add_number(vector<int> &vec, int num) {
    vec.push_back(num);

    cout << num << " added." << endl;
}

void clear_numbers(vector<int> &vec) {
    vec.clear();

    cout << "Removed elements" << endl;

    cout << endl;
}

double calc_average(const vector<int> vec) {
    int sum {};
    double average {0.0};

    if (vec.size() > 0) {

        for (auto element: vec) {
            sum += element;
        }
        
        average = static_cast<double>(sum) / vec.size();
    }
    
    return average;
}

void quit_program(bool &status) {
    cout << "Bye 👋" << endl;
    status = false;
}
