#include <iostream>
#include <vector>

using namespace std;

void change_num1(int &num);
void change_word(string &word);
void clear_vector(vector<string> &vec);
void print_vector(const vector<string> &vec);

int main() {
    int num1 {20};
    cout << "Your number before pass by reference: " << num1 << endl;
    change_num1(num1);
    cout << "Your number after pass by reference: " << num1 << endl;

    cout << endl;

    string my_word {"Word"};
    cout << "Word before pass by reference: " << my_word << endl;
    change_word(my_word);
    cout << "Word after pass by reference: " << my_word << endl;

    cout << endl;

    vector<string> names {"Larry", "Moly", "Poly", "Hoki"};
    cout << "Names before pass by reference: ";
    print_vector(names);
    cout << "Names after pass by reference: ";
    clear_vector(names);
    print_vector(names);

    return 0;
}

void change_num1(int &num1) {
    num1 = 1000;
}

void change_word(string &word) {
    word = "Changed";
}

void clear_vector(vector<string> &vec) {
    vec.clear();
}

void print_vector(const vector<string> &vec) {
    for (auto element: vec) 
        cout << element << " ";
    
    cout << endl;
}
