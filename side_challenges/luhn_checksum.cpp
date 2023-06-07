#include <iostream>

using namespace std;

//Function prototype
int double_digit(int digit);
int add_two_digits(int digit);
// void is_valid_input(const string user_input, bool &valid_input);
void is_valid_checksum(int check_sum, bool &valid_checksum);

int main() {
    string digits {};
    int checksum {};
    cout << "Enter an even digit number: ";
    cin >> digits;

    // bool valid_input {false};

    for (size_t index {}; index < digits.length(); ++index) {
        if (index % 2 == 0) {
            checksum += digits[index] - '0';
        }
        else {
            checksum += double_digit(digits[index] - '0');
        }
    }
    
    bool valid_checksum {false};
    is_valid_checksum(checksum, valid_checksum);

    if (checksum % 10 == 0) {
        cout << "Checksum of " << digits << " = " << checksum << ", is divisible by 10. Valid." << endl;
    }
    else{
        cout << "Checksum of " << digits << " = " << checksum << ", is not divisible by 10. Invalid." << endl;
    }

    return 0;
}

int double_digit(int digit) {
    digit *= 2;

    if (digit >= 10) {
        // split and add digits
        return add_two_digits(digit);
    }
    return digit;
}

int add_two_digits(int digit) {
    int first_digit {1};
    int second_digit {digit % 10};

    return first_digit + second_digit;
}

// void is_valid_input(const string user_input, bool &valid_input) {
//     if (user_input.length() % 2 == 0) {
//         valid_input = true;
//     }
//     else{
//         valid_input = false;
//     }
// }

void is_valid_checksum(const int checksum, bool &valid_checksum) {
    if (checksum % 10 == 0) {
        valid_checksum = true;
    }
    else {
        valid_checksum = false;
    }
}
