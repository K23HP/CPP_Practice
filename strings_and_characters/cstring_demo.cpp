#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char first_name[20] {};  // create a cstring: dtype var_name[size];
    cout << "Enter your first name: ";
    cin >> first_name;

    char last_name[20] {};
    cout << "Enter your last name: ";
    cin >> last_name;

    cout << "Your first name is: " << first_name << ". ";
    // Display how many characters are in first_name using strlen()
    cout << "It has " << strlen(first_name) << " characters." << endl;  // strlen() returns size_t
    cout << "Your last name is: " << last_name << ". ";
    // Display how many characters are in last_name using strlen()
    cout << "It has " << strlen(last_name) << " characters." << endl;  // strlen() returns size_t
    cout << "---------------------------------------------------" << endl;

    char full_name[50] {};
    strcpy(full_name, first_name);  // Copy first_name into full_name using strcpy()
    strcat(full_name, " ");  // Concatenate a space to full_name using strcat()
    strcat(full_name, last_name);  // Concatenate last_name to full_name using strcat()
    cout << "Your full name is: " << full_name << "." << endl;

    cout << "---------------------------------------------------" << endl;
    
    cout << "Enter your full name: ";
    cin >> full_name;  // cin behavior: it stops after a space
    cout << "Your full name is: " << full_name << endl;

    cout << "---------------------------------------------------" << endl;

    // // To get all values entered into console using cin
    // cin.getline(full_name, 50);  // cin.getline(var_name, limit); get all values within limit
    // cout << "Your full name is: " << full_name << endl;

    // cout << "---------------------------------------------------" << endl;

    // char temp[50] {};

    // strcpy(temp, full_name);  // Copy full_name into temp

    // if (strcmp(temp, full_name) == 0) 
    //     cout << temp << " and " << full_name << " are the same." << endl;
    // else 
    //     cout << temp << " and " << full_name << " are not the same." << endl;

    // // Change all characters in full_name to uppercase
    // for (size_t i {0}; i < strlen(full_name); ++i) {
    //     if (isalpha(full_name[i]))
    //         full_name[i] = toupper(full_name[i]);
    // }
    // cout << "Your full name is: " << full_name << endl;

    // if (strcmp(temp, full_name) == 0) {
    //     cout << temp << " and " << full_name << " are the same." << endl;
    // }
    // else {
    //     cout << temp << " and " << full_name << " are different." << endl;
    // }

    // // strcmp(str1, str2) return 0 if the str1 and str2 are equal (negative value if str1 ascii value < str2)
    // // (positive value if str1 ascii value > str2)
    // cout << "Results of comparing " << temp << " and " << full_name  << ": " << strcmp(temp, full_name) << endl;
    // cout << "Results of comparing " << full_name << " and " << temp  << ": " << strcmp(full_name, temp) << endl;

    return 0;
}