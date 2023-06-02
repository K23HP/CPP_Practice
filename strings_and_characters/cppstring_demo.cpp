#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // // Initialization
    // string first_name;  
    // string fruit {"Apple"};
    // string juice {fruit, 0, 3};

    // cout << "Name is " << first_name << " and it has " << first_name.length() << " characters." << endl;

    // // Comparison
    // cout << boolalpha;
    // cout << fruit << " == " << juice << " ? " << (fruit == juice) << endl;

    // // Assignment
    // first_name = "Khant";  // Assignment
    // cout << "Name is " << first_name << " and it has " << first_name.length() << " characters." << endl;

    // first_name[0] = 'T';
    // cout << "Name is " << first_name << " and it has " << first_name.length() << " characters." << endl;
    // first_name.at(0) = 'K';
    // cout << "Name is " << first_name << " and it has " << first_name.length() << " characters." << endl;

    // // Concatenation
    // juice = fruit + " juice";
    // cout << fruit << " + " << "juice" << " = " << juice << endl;

    // // Loop
    // for (size_t i {0}; i < juice.length(); ++i)
    //     cout << juice[i];
    // cout << endl;

    // for (char c: first_name) 
    //     cout << c;
    // cout << endl;

    // // Substring
    // string s1 = "This is a test.";

    // cout << s1.substr(0,4) << endl; // substr(starting_index,how many characters)
    // cout << s1.substr(5,2) << endl;
    // cout << s1.substr(10,4) << endl;    

    // // Erase
    // s1.erase(0,5);  // erase(starting_index,how many characters)
    // cout << s1 << endl;

    // // Getline
    // string full_name {};
    // cout << "Enter your full name: ";
    // getline(cin, full_name);
    // cout << "Your full name is: " << full_name << endl;

    // // Find
    // s1 = "The secret word is Boo.";

    // string word {};
    // cout << "Enter a word to find: ";
    // cin >> word;

    // size_t position = s1.find(word);  // size_t value is 0 or greater than 0.

    // if (position != string::npos)  // string::npos means null position at the end of the string
    //     cout << "Found " << word << " at position: " << position << endl;
    // else 
    //     cout << "Sorry, " << word << " not found." << endl;

    // cout << endl;        

    // string unformatted_full_name {"StephenHawking"};
    
    // //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    // //----WRITE YOUR CODE BELOW THIS LINE----
    // string first_name {unformatted_full_name, 0, 7};
    // string last_name = unformatted_full_name.substr(7, 7);
    
    // string formatted_full_name {};
    // formatted_full_name = first_name + last_name;
    
    // formatted_full_name.insert(7, " ");

    // cout << formatted_full_name << endl;

    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    journal_entry_1.erase(0, 6);
    
    if (journal_entry_1 > journal_entry_2) {
        journal_entry_1.swap(journal_entry_2);
    }
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << journal_entry_1 << "\n" << journal_entry_2 << endl;

    return 0;
}