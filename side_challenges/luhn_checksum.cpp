#include <iostream>

using namespace std;

//Function prototype
int double_digit(int digit);
int add_two_digits(int digit);

int main() {
    char digit {};
    int checksum {};
    cout << "Enter a six digits number: ";
    for (size_t position {0}; position < 6; ++position) {
        cin >> digit;
        if (position % 2 == 0) {
            checksum += digit - '0';
        }
        else {
            checksum += double_digit(digit - '0');
        }
    }
    
    if (checksum % 10 == 0) {
        cout << checksum << " is divisible by 10. Valid." << endl;
    }
    else{
        cout << checksum << " is not divisible by 10. Invalid." << endl;
    }

    return 0;
}

int double_digit(int digit) {
    digit *= 2;

    if (digit >= 10) {
        // split and add digits
        digit = add_two_digits(digit);
        return digit;
    }
    return digit;
}

int add_two_digits(int digit) {
    int first_digit {1};
    int second_digit {digit % 10};

    return first_digit + second_digit;
}
